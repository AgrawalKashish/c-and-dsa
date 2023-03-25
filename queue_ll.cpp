#include<iostream>
using namespace std;
class node{
   public:
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
class queue{
   public:
        node *front, *rear;
        int sz;
        queue(){
            front=rear=NULL;
            sz=0;
        }
        void enqueue(int x){
            node *temp=new node(x);
            if (rear == NULL) { 
			front = rear = temp; 
			return; 
		} 
            rear->next=temp;
            rear=temp;
            sz++;
        }
        void dequeue(){
            node *temp=front;
            if (front == NULL) {
			return; }
            int x= front->data;
            front=front->next;
            if (front == NULL) 
			rear = NULL; 
            delete(temp);
            cout<<"On deQueue: "<<x<<endl;
        }
};
int main(){
    queue q; 
	q.enqueue(10); 
	q.enqueue(20); 
	q.dequeue(); 
	q.dequeue(); 
	q.enqueue(30); 
	q.enqueue(40); 
	q.enqueue(50); 
	q.dequeue(); 
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
return 0;
}