#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val ;
    int height;
    struct Node *left , *right;
};

int max(int a , int b){
    if(a>b)return a;
    return b;
}

int height(Node *N){
    return N->height;
}

Node* newNode(int key){
    Node* newNode = new Node();
    newNode->val = key;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

Node* rightRotate(Node* Y ){
    Node* X = Y->left;
    Node* T1 = X->right;
    X->right = Y;
    Y->left = T1;

    Y->height = max(height(Y->left) , height(Y->right)) + 1;
    X->height = max(height(X->left) , height(X->right)) + 1;

    return X;
}

Node* leftRotate(Node* X ){
    Node* Y = X->right;
    Node* T1 = Y->left;

    Y->left = X;
    X->right = T1;

    X->height = max(height(X->left) , height(X->right)) + 1;
    Y->height = max(height(Y->left) , height(Y->right)) + 1;
   
    
    return Y;
}

int balance(Node* N){
    if(N==NULL) return 0;
    return (height(N->left) - height(N->right) );
}

Node* Insert(Node* node , int key){
    if(node==NULL) return newNode(key);
    else if(key<node->val) return Insert(node->left , key);
    else if(key>node->val) return Insert(node->right , key);
    else return node;

    node->height = 1 +  max(height(node->left) , height(node->right));

    int bal = balance(node);

    if(bal>1 ){
        if( (key<node->left->val)) rightRotate(node);
        else{
                node->left = leftRotate(node->left);
                return rightRotate(node);
        }
    } 
     if(bal<-1 ){
        if( (key>node->right->val)) leftRotate(node);
        else{
                node->right = rightRotate(node->right);
                return leftRotate(node);
        }
    }
    
    return node;

}


Node* DeleteNode(Node* root , int key){
    if(root==NULL) return root;
    else if(key<root->val) DeleteNode(root->left , key);
    else if(key>root->val) DeleteNode(root->right , key);
    else{
        if(!root->left && !root->right) return NULL;
        else if(!root->left || !root->right){
            if(!root->left) return root->right;
            else if(!root->right) return root->left;
        }
        else{
            Node* current = root;
            while( current->left != NULL){
                current = current->left;
            }
            root->val = current->val;
            root->right = DeleteNode(root->right , current->val);
        }
        if(root==NULL) return root;
        // to be continued later ;
        else return root;
        
    }

    // inorder traversal to be created
    
}

int main(){
    //will start the program from here
}