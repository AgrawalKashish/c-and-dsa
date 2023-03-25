#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(Node *head){
    Node *curr=head;
    if(head==NULL)return;
    do {
        cout<<curr->data<<endl;
        curr=curr->next;
    }  while(curr!=head);
}
Node *insert_s(Node *head, int x){
    Node *curr=head;
    Node *temp= new Node(x);
    if(head==NULL){
    temp->next=temp;
    head=temp;
    return temp;}
     else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}
Node *insert_end(Node *head, int x){
    Node *temp= new Node(x);
    if(head==NULL){
     temp->next=temp;
    return temp;}
     else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        head=temp;
        return head;
    }
}
Node *delHead(Node *head){
    if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}
Node *delKth(Node *head, int k){
    if(head==NULL)return head;
    if(k==1)return delHead(head);
        Node *curr=head;
    for(int i=0;i<k-2;i++)
        curr=curr->next;
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next=head;
    head=insert_s(head,34);
    head=insert_end(head,100);
    printlist(head);
    head=delHead(head);
	printlist(head);
return 0;
}