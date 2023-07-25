#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next1;
    struct Node* next2;
};

struct Node* createNewNode(int value) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->value = value;
    temp->next1 = NULL;
    temp->next2 = NULL;
    return temp;
}

struct Node* createList1(int a, int n) {
    if (a > n) {
        return NULL;
    }

    struct Node* head = createNewNode(a);
    struct Node* temp = head;
    int val = a + a;

    while (val <= n) {
        temp->next1 = createNewNode(val);
        temp->next2 = NULL;
        val = val + a;
        temp = temp->next1;
    }

    return head;
}

struct Node* createList2(int b, int n) {
    if (b > n) {
        return NULL;
    }

    struct Node* head = createNewNode(b);
    struct Node* temp = head;
    int val = b + b;

    while (val <= n) {
        temp->next2 = createNewNode(val);
        temp->next1 = NULL;
        val = val + b;
        temp = temp->next2;
    }

    return head;
}

void printList1(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d --> ", temp->value);
        temp = temp->next1;
    }
    printf("NULL\n");
}

void printList2(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d --> ", temp->value);
        temp = temp->next2;
    }
    printf("NULL\n");
}

struct Node* mergeLists(struct Node* head1, struct Node* head2) {
    if (head1 == NULL && head2 == NULL) {
        return NULL;
    }
    if (head1 == NULL) {
        struct Node* temp = head2;
        while (temp != NULL) {
            temp->next1 = temp->next2;
            temp = temp->next1;
        }
        return head2;
    }
    if (head2 == NULL) {
        return head1;
    }

    struct Node* temp1 = head1;
    struct Node* temp2 = head2;
    struct Node* head3;
    
    if (temp1->value < temp2->value) {
        head3 = createNewNode(temp1->value);
        temp1 = temp1->next1;
    } else {
        head3 = createNewNode(temp2->value);
        temp2 = temp2->next2;
    }

    struct Node* temp = head3;
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->value < temp2->value) {
            temp->next1 = createNewNode(temp1->value);
            temp1 = temp1->next1;
        } else if (temp1->value == temp2->value) {
            temp1 = temp1->next1;
            continue;
        } else {
            temp->next1 = createNewNode(temp2->value);
            temp2 = temp2->next2;
        }
        temp = temp->next1;
    }

    while (temp1 != NULL) {
        temp->next1 = createNewNode(temp1->value);
        temp1 = temp1->next1;
        temp = temp->next1;
    }

    while (temp2 != NULL) {
        temp->next1 = createNewNode(temp2->value);
        temp2 = temp2->next2;
        temp = temp->next1;
    }

    return head3;
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next1;
        free(temp);
    }
}

int main() {
    int n, a, b;
    // taking inputs
    printf("Enter the max number:\n");
    scanf("%d", &n);
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    struct Node* head1 = createList1(a, n);
    struct Node* head2 = createList2(b, n);
    // display list 1 and list 2
    printf("Printing list 1\n");
    printList1(head1);
    printf("Printing list 2\n");
    printList2(head2);
    // merge list 1 and list 2
    struct Node* head3 = mergeLists(head1, head2);
    // display merged list
    printf("Printing merged list\n");
    printList1(head3);

    // free memory
    freeList(head1);
    freeList(head2);
    freeList(head3);

    return 0;
}
