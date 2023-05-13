#include <bits/stdc++.h>
using namespace std;
class node{
     public:
        int key;
        node *left,*right;
        node(int k){
            key=k;
            left=right=NULL;
        }
};
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<endl;
        inorder(root->right);
    }
}
void preorder(node *root){
    if(root!=NULL){
        cout<<root->key<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<endl;
    }
}
int height(node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left), height(root->right))+1;
    }
}
void printKDist(node *root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){cout<<root->key<<" ";}
    else{
        printKDist(root->left,k-1);
        printKDist(root->right, k-1);
    }
}
void levelorder(node *root){
   int m= height(root);
   while(m>0){
   printKDist(root,m-1);
   cout<<endl;
   m--;}
}

void printLevel(node *root){
    if(root==NULL)return;
    queue<node *> q;
    q.push(root);
    while(q.empty()==false){
        node *curr=q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}  
int getSize(node *root){
    if(root==NULL)
        return 0;
    else
        return 1+getSize(root->left)+getSize(root->right);
}
int getmax(node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(root->key, max(getmax(root->left), getmax(root->right)));
    }
}
//error
void itera_inorder(node *root){
    stack<node *> treeStack;
	node *currentNode = root;

	while (currentNode != NULL || treeStack.empty() == false)
	{
		while (currentNode != NULL)
		{
			treeStack.push(currentNode);
			currentNode = currentNode->left;
		}
		
		currentNode = treeStack.top();
		treeStack.pop();
      
		cout << currentNode->key<<" ";
        
		currentNode = currentNode->right;
	} 
}
void itera_preorder(node *root){
    if (root == NULL)
        return;

    stack<node*> nodeStack;
    nodeStack.push(root);
 
    while (nodeStack.empty() == false) {
        struct node* node = nodeStack.top();
        printf("%d ", node->key);
        nodeStack.pop();
 
        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }
}

void preorderIterative(node* root)
{
    if (root == NULL)
        return;
 
    stack<node*> st;
    node* curr = root;
    while (!st.empty() || curr != NULL) {
        while (curr != NULL) {
            cout << curr->key << " ";
 
            if (curr->right)
                st.push(curr->right);
 
            curr = curr->left;
        }
        if (st.empty() == false){
            curr = st.top();
            st.pop();
        }
    }
}
int main(){
    node *root= new node(100);
    root->left= new node(90);
    root->right= new node(80);
    root->right->left= new node(70);
    root->right->right= new node(77);
    root->left->left= new node(50);
    root->left->right= new node(77);
    // inorder(root);
    // preorder(root);
    // postorder(root);
    // cout<< height(root);
    // cout<<endl;
    printKDist(root, 1);
    // levelorder(root);
    // cout<<getSize(root);
    // cout<<getmax(root);
    // itera_inorder(root);
    // cout<<endl;
    // itera_preorder(root);
    // cout<<endl;
    // preorderIterative(root);
return 0;
}