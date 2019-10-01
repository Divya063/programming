#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left; Node* right;
};

Node* insert(int data){
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert1(int arr[], int i, Node* root, int n){
    
    if(i<n){
    
    Node* temp = insert(arr[i]);
    root = temp;
    root->left = insert1(arr, 2*i+1, root->left, n);
    root->right = insert1(arr, 2*i+2, root->right, n);
    
    }
    
    return root;
    
}

void inOrder(Node* root) 
{ 
    if (root != NULL) 
    { 
        inOrder(root->left); 
        cout << root->data <<" "; 
        inOrder(root->right); 
    } 
} 
  
int main() {
	//code
	int n;
	cin >> n;
	while(n--){
	    int size;
	    cin >> size;
	    int arr[size];
	    for(int i =0; i<size; i++){
	        cin >> arr[i];
	    }
	    
	    Node* root = insert1(arr, 0, root, n);
	    inOrder(root);
	}
}