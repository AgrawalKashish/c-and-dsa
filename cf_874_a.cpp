#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 5; i++) {
        vector<int> photograph(N);
        for (int j = 0; j < N; j++) {
            cin >> photograph[j];
        }

        // Find the difference between the intended ordering and the photograph
        vector<int> diff;
        for (int j = 0; j < N; j++) {
            if (A[j] != photograph[j]) {
                diff.push_back(A[j]);
            }
        }

        // If there is exactly one difference, update the intended ordering
        if (diff.size() == 1) {
            int movedKid = diff[0];
            int newPosition = find(photograph.begin(), photograph.end(), movedKid) - photograph.begin();
            A.erase(remove(A.begin(), A.end(), movedKid), A.end());
            A.insert(A.begin() + newPosition, movedKid);
        }
    }

    // Print the reconstructed intended ordering
    for (int i = 0; i < N; i++) {
        cout << A[i] << endl;
    }

    return 0;
}
