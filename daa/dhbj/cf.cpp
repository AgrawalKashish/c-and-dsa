#include <iostream>
#include <vector>

using namespace std;

class SegmentTree {
private:
    int n;
    vector<int> tree;
    vector<int> lazy;

    void apply_query_type0(int index, int l, int r, int value) {
        tree[index] += (r - l + 1) * value;
        if (l != r) {
            if (lazy[index] == -1)
                lazy[index] = value;
            else
                lazy[index] |= value;
        }
    }

    void apply_query_type1(int index, int l, int r, int value) {
        tree[index] |= value;
        if (l != r) {
            if (lazy[index] == -1)
                lazy[index] = value;
            else
                lazy[index] |= value;
        }
    }

    void apply_query_type2(int index, int l, int r) {
        if (lazy[index] != -1) {
            tree[index] &= lazy[index];
            if (l != r) {
                if (lazy[2 * index + 1] == -1)
                    lazy[2 * index + 1] = lazy[index];
                else
                    lazy[2 * index + 1] &= lazy[index];

                if (lazy[2 * index + 2] == -1)
                    lazy[2 * index + 2] = lazy[index];
                else
                    lazy[2 * index + 2] &= lazy[index];
            }
            lazy[index] = -1;
        }
    }

    void construct_tree(const vector<int>& arr, int index, int l, int r) {
        if (l == r) {
            tree[index] = arr[l];
            return;
        }

        int mid = (l + r) / 2;
        construct_tree(arr, 2 * index + 1, l, mid);
        construct_tree(arr, 2 * index + 2, mid + 1, r);
        tree[index] = tree[2 * index + 1] & tree[2 * index + 2];
    }

public:
    SegmentTree(const vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n, 0);
        lazy.resize(4 * n, -1);
        construct_tree(arr, 0, 0, n - 1);
    }

    void update_range(int index, int l, int r, int ql, int qr, int query_type, int value) {
        apply_query_type2(index, l, r);

        if (ql > r || qr < l)
            return;

        if (ql <= l && qr >= r) {
            if (query_type == 0)
                apply_query_type0(index, l, r, value);
            else if (query_type == 1)
                apply_query_type1(index, l, r, value);
            return;
        }

        int mid = (l + r) / 2;
        update_range(2 * index + 1, l, mid, ql, qr, query_type, value);
        update_range(2 * index + 2, mid + 1, r, ql, qr, query_type, value);
        tree[index] = tree[2 * index + 1] & tree[2 * index + 2];
    }

    int query(int index, int l, int r, int ql, int qr) {
        apply_query_type2(index, l, r);

        if (ql > r || qr < l)
            return -1;

        if (ql <= l && qr >= r)
            return tree[index];

        int mid = (l + r) / 2;
        int left = query(2 * index + 1, l, mid, ql, qr);
        int right = query(2 * index + 2, mid + 1, r, ql, qr);
        return left & right;
    }
};

vector<int> process_queries(const vector<int>& A, const vector<vector<int>>& B) {
    SegmentTree st(A);
    vector<int> answers;
    for (const vector<int>& query : B) {
        if (query[0] == 0)
            st.update_range(0, 0, st.n - 1, query[1], query[2], query[0], query[3]);
        else if (query[0] == 1)
            st.update_range(0, 0, st.n - 1, query[1], query[2], query[0], query[3]);
        else if (query[0] == 2) {
            int ans = st.query(0, 0, st.n - 1, query[1], query[2]);
            answers.push_back(ans);
        }
    }
    return answers;
}