#include <iostream>
using namespace std;
class Node
{
public:
    int key;
    Node *next1;
    Node *next2;

    Node(int key) : key(key), next1(nullptr), next2(nullptr) {}
};
// create new node
Node *newNode(int key)
{
    Node *temp = new Node(key);
    return temp;
}
// create list 1
Node *createlist1(int a, int n)
{
    if (a > n)
    {
        return nullptr;
    }
    Node *head = newNode(a);
    Node *temp = head;
    int val = a + a;
    while (val <= n)
    {
        temp->next1 = newNode(val);
        temp->next2 = nullptr;
        val = val + a;
        temp = temp->next1;
    }
    return head;
}
// create list 2
Node *createlist2(int b, int n)
{
    if (b > n)
    {
        return nullptr;
    }
    Node *head = newNode(b);
    Node *temp = head;
    int v = b + b;
    while (v <= n)
    {
        temp->next2 = newNode(v);
        temp->next1 = nullptr;
        v = v + b;
        temp = temp->next2;
    }
    return head;
}
// print list 1
void printlist1(Node *head)
{
    Node *temp = head;
    if (head == nullptr)
    {
        return;
    }
    while (temp != nullptr)
    {
        cout << temp->key << "-->";
        temp = temp->next1;
    }
    cout << "\n";
    return;
}
// print list 2
void printlist2(Node *head)
{
    Node *temp = head;
    if (head == nullptr)
    {
        return;
    }
    while (temp != nullptr)
    {
        cout << temp->key << "-->";
        temp = temp->next2;
    }
    cout << "\n";
    return;
}
// merge function
Node *merge(Node *head1, Node *head2)
{
    if (head1 == nullptr && head2 == nullptr)
    {
        return nullptr;
    }
    if (head1 == nullptr)
    {
        Node *temp = head2;
        while (temp != nullptr)
        {
            temp->next1 = temp->next2;
            temp = temp->next1;
        }
        return head2;
    }
    if (head2 == nullptr)
    {
        return head1;
    }
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *head3;
    if (temp1->key < temp2->key)
    {
        head3 = newNode(temp1->key);
        temp1 = temp1->next1;
    }
    else
    {
        head3 = newNode(temp2->key);
        temp2 = temp2->next2;
    }
    Node *temp = head3;
    while (temp1 && temp2)
    {
        if (temp1->key < temp2->key)
        {
            temp->next1 = newNode(temp1->key);
            temp1 = temp1->next1;
        }
        else if (temp1->key == temp2->key)
        {
            temp1 = temp1->next1;
            continue;
        }
        else
        {
            temp->next1 = newNode(temp2->key);
            temp2 = temp2->next2;
        }
        temp = temp->next1;
    }
    while (temp1)
    {
        temp->next1 = newNode(temp1->key);
        temp1 = temp1->next1;
        temp = temp->next1;
    }
    while (temp2)
    {
        temp->next1 = newNode(temp2->key);
        temp2 = temp2->next2;
        temp = temp->next1;
    }
    return head3;
}

int main()
{
    int n, a, b;
    // taking inputs
    cout << "Enter the max number:\n";
    cin >> n;
    cout << "Enter a: \n";
    cin >> a;
    cout << "Enter b: \n";
    cin >> b;
    Node *head1 = createlist1(a, n);
    Node *head2 = createlist2(b, n);
    // display list 1 and list 2
    cout << "printing list1\n";
    printlist1(head1);
    cout << "printing list2\n";
    printlist2(head2);
    // merge list 1 and list 2
    Node *head3 = merge(head1, head2);
    // display merged list
    cout << "Printing merged list\n";
    printlist1(head3);

    return 0;
}
