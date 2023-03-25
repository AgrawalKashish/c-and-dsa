#include<iostream>
using namespace std;
class bst{
    public: 
       int key;
       bst *left;
       bst *right;
       bst(int x){
        key=x;
        left=right=NULL;
       }
};
bool search(bst *root, int x){
    if(root==NULL)
        return false;
    if(root->key==x)
        return true;
    else if(root->key>x){
        return search(root->left,x);
    }else{
        return search(root->right,x);
    }
} 

bst *insert(bst *root, int x){
    if(root==NULL){
        return new bst(x);
    }
    if(x<(root->key)){
       root->left= insert(root->left,x);
    }
    else if(x>(root->key)){
       root->right= insert(root->right,x);
    }
    return root;
}
bst *insert_iter(bst *root, int x){
    bst *temp=new bst(x);
    bst *parent=NULL,*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->key>x)
        parent->left=temp;
    else
        parent->right=temp;
    return root;
} 
bst *getSuccessor(bst *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}
bst *getPredessor(bst *curr){
    curr=curr->left;
    while(curr!=NULL && curr->right!=NULL)
        curr=curr->right;
    return curr;
}
void inorder(bst *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
bst *delete_bst(bst *root, int x){
    if(root==NULL){
        return root;
    }
    if(root->key>x){
        root->left=delete_bst(root->left,x);
    }
    else if(root->key<x){
        root->right=delete_bst(root->right,x);
    }
    else{
      if(root->left==NULL){
            bst *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            bst *temp=root->left;
            delete root;
            return temp;
        }
        else{
            bst *succ=getSuccessor(root);
            root->key=succ->key;
            root->right=delete_bst(root->right,succ->key);
        }
    }
    return root;
}
bst* floor(bst *root, int x){
   bst *res=NULL;
    while(root!=NULL){
        if(root->key==x)
            return root;
        else if(root->key>x)
            root=root->left;
        else{
            res=root;
            root=root->right;
        }
    }
    return res;
}
bst* ceil(bst *root, int x){
   bst *res=NULL;
    while(root!=NULL){
        if(root->key==x)
            return root;
        else if(root->key<x)
            root=root->right;
        else{
            res=root;
            root=root->left;
        }
    }
    return res;
}
int main(){
    // bst *root= new bst(30);
    // insert(root,10);
    // insert(root,45);
    // insert(root,47);
    // insert(root,30);
    // insert(root,5);
    // insert(root,7);
    // insert(root,100);
    // insert(root,55);
    // insert(root,27);
    // insert(root,16);
    // inorder(root);
    bst *root= new bst(3);
    insert_iter(root,10);
    insert_iter(root,45);
    insert_iter(root,47);
    insert_iter(root,30);
    insert_iter(root,5);
    insert_iter(root,7);
    insert_iter(root,100);
    insert_iter(root,55);
    insert_iter(root,27);
    insert_iter(root,16);
    inorder(root);
    cout<<endl;
    delete_bst(root,100);
    inorder(root);
    int x=16;
	if(search(root,x))
	    cout<<"Found"<<endl;
	else
	    cout<<"Not Found"<<endl;
    cout<<floor(root,17)->key<<endl;
    cout<<ceil(root,17)->key<<endl;
return 0;
}