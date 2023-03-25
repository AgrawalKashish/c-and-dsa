#include<iostream>
using namespace std;
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
int main(){
 node* head= new node(3);
    insertSort(head,25);
    insertSort(head,15);
    insertSort(head,11);
    insertSort(head,31);
    printlist(head);
return 0;
}