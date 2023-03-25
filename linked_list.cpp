#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
    node(int x){
        data=x;
        next=NULL;
    }
}*q=NULL;
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
void print_recurse(node *head){
    if(head==NULL){
        return;
    }
    node *curr=head;
    cout<<curr->data<<endl;
    print_recurse(curr->next);
}
int search(node *head,int x){
    if(head==NULL)return -1;
    if(head->data==x)return 1;
    else{
        int res=search(head->next,x);
        if(res==-1)return -1;
        else return res+1;
    }}
void insertb(node *head, int x){
    q=head;
    node *m= new node(x);
    m->next=q;
    q=m;
}
node *insertl(node *head, int x){
    node* m = new node(x);
    if(head==NULL){
        return m;
    }
    node *curr=head;
    
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=m;
    return q;
}
node* delete_f(node *head){
    q=q->next;
    delete(head);
    return q;
}
node *delete_l(node *head){
     if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next->next!=NULL)
        curr=curr->next;
    delete (curr->next);
    curr->next=NULL;
    return head;

}
node *insert(node *head, int x,int pos){
    node *temp = new node(x);
    if(head==NULL){
        if(pos==1)return temp;
        else return head;
    }
    if(pos==1){
        temp->next=head;
        return temp;
    }
    node *curr=head;
    for(int i=1;i<=pos-2;i++){
        curr=curr->next;
        if(curr==NULL){
            cout<<"Position out of range"<<endl;
            return head;
        }
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main(){

    node* head = new node(10);
    // q=head;
    head->next = new node(20);
    head->next->next = new node(30);
    // printlist(head);
    // insertb(q,55);
    // printlist(q);
    // insertl(q,44);
    // printlist(q);
    // delete_f(q);
    // printlist(q);
    // head=delete_l(head);
    printlist(head);
    head=insert(head, 35, 2);
	printlist(head);
    // print_recurse(head);
    // cout<<search(head,50);
    // cout<<search(head,30);
return 0;
}