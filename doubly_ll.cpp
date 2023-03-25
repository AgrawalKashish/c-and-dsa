#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *prev,*next;
    Node(int x){
        data=x;
        prev=next=NULL;
    }
};
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node *insert_b(Node *head, int x){
    Node *temp= new Node(x);
    temp->next=head;
    temp->prev=NULL;
    head->prev=temp;
    return temp;
}
Node *insert_e(Node *head, int x){
    Node *temp=new Node(x);
    if(head==NULL)return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
    }
Node *del_begin(Node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL)return NULL;
    else{
        head=head->next;
        head->prev=NULL;
        return head;
    }
}
Node *del_end(Node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL)return NULL;
    Node *curr=head;
    Node *curr_pre=head;
    
    while(curr->next!=NULL){
        curr_pre=curr;
        curr=curr->next;
    }
    curr_pre->next=NULL;
    return head;
    
}
int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	printlist(head);
    head=insert_b(head,456);
    printlist(head);
    head=insert_e(head,234);
    printlist(head);
    head=del_begin(head);
    printlist(head);
    head=del_end(head);
    printlist(head);
	return 0;
} 