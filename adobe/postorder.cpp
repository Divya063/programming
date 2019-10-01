#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    
    int data;
    Node* left;
    Node* right;
};

 Node* getNode(int data){
    
    Node* newnode = new Node;
    newnode->data= data;
    newnode->left=NULL;
    newnode->right=NULL;
    
    return newnode;
}

Node* Insert(Node* root, int data){
    if(root==NULL){
        
        root= getNode(data);
    }
    
    else if(root->data>=data){
        
        root->left = Insert(root->left, data);
        
    }
    
    else{
        
        root->right =Insert(root->right, data);
    }
    
    return root;
}

void postorder(Node* root){
    
    if (root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
    
    
}



int main() {
    
    
    int t;
    cin >> t;
    while(t--){
        
        Node* root=NULL;
        
        int n;
        cin >> n;
        int data;
        for(int i=0;i<n;i++){
            cin >> data;
            root= Insert(root, data);
        }
        
        postorder(root);
        
        
        
    }
	
	return 0;
}