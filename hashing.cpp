#include<iostream>
using namespace std;
class Myhash{
    public:
      int cap,size;
      int *arr;
      Myhash(int c){
        cap = c;
        size=0;
        arr = new int[cap];
        for(int i=0;i<cap;i++){
            arr[i]= -1;
        }
      }
      int hash(int key){
        return key% cap;
      }
      bool search(int key);
      bool insert(int key);
      bool extract(int key);
};

bool Myhash :: search(int key){
    int h = hash(key);
    int i=h;
    while(arr[i] !=-1){
        if(arr[i]==key){
            return true;
        }
        i = (i+1)%cap;
        if(i==h){
            return false;
        }
    }
    return false;
 }
bool Myhash :: insert(int key){
        if(size==cap)
            return false;
        int i=hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
            i=(i+1)%cap;
        if(arr[i]==key)
            return false;
        else{
            arr[i]=key;
            size++;
            return true;
        }
}
bool Myhash :: extract(int key){
     int h = hash(key);
    int i=h;
    while(arr[i] !=-1){
        if(arr[i]==key){
            arr[i]=-2;
            cout<<"true"<<endl;
            return true;
        }
        i = (i+1)%cap;
        if(i==h){
            return false;
        }
    }
}
int main(){
   Myhash mh(7);
	    mh.insert(49);
	    mh.insert(56);
	    mh.insert(72);
	    if(mh.search(56)==true)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    mh.extract(56);
	    if(mh.search(56)==true)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
return 0;
}