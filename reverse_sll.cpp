#include<iostream>
using namespace std;
//copying into other ll is the costly one
struct node{
    int data;
    struct node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
node *insertSort(node *head, int x){
    node *temp= new node(x);
    if(head==NULL){
        return temp;
    }
    if(x<head->data){
        temp->next=head;
        head=temp;
        return head;
    }
    node *curr=head;
    while(curr->next!=NULL && curr->next->data<x){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
node *reverse(node *head){
    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL){
        node *next= curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
node *reverse_recurse(node *head){
    if(head==NULL||head->next==NULL)return head;
    node *rest_head=reverse_recurse(head->next);
    node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}
node *recRevL(node *curr,node *prev){
    if(curr==NULL)return prev;
    node *next=curr->next;
    curr->next=prev;
    return recRevL(next,curr);
}

int main(){
    node* head= new node(3);
    insertSort(head,25);
    insertSort(head,15);
    insertSort(head,11);
    insertSort(head,31);
    printlist(head);
    // head=reverse(head);
    // head= reverse_recurse(head->next);
    head=recRevL(head,NULL);
    printlist(head);

return 0;
}