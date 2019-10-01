#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node* next;
	Node* prev;
};

Node* root;



struct Node* getnewnode(int x){

	Node* newnode= new Node;
	newnode->data=x;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;

}

void insert(int x){

Node* headnode= getnewnode(x);
if(root==NULL){
	root=headnode;
	return;
}

root->prev=headnode;
headnode->next=root;
root=headnode;

}

Node* reverse(Node* root){
	Node* current =root;
	Node* temp= NULL;
	//nextnode=current->next;
	while(current->next!=NULL){
		temp=current->next; //swapping is done here
		current->next=current->prev;
		current->prev=temp;
		current=current->prev;
	}
	current->next=current->prev;
	current->prev=NULL;
	root=current;
	return root;
}

void print(Node* root){

	Node* temp1= root;
	while(temp1!=NULL){ //temp->next last element will not be printed
		cout << temp1->data << " ";
		temp1=temp1->next;
	}
	cout << endl;
}

int main(){
	
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	print(root);
	root=reverse(root);
	print(root);
	


}