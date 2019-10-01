#include<bits/stdc++.h>

using namespace std;

struct Node{

	int data;
	Node* next;
};

Node* root;

Node* getNewNode(int x){

	Node* newnode=new Node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}

void insert(int x){

	Node* headnode= getNewNode(x);
	if(root==NULL){
		root= headnode;
		return;
	}
	headnode->next=root; //elemtent inserted first will be at last root contatins the adress of the first element inserted so during
	root=headnode; //insertion of second node the node->next should point to element inserted first
}

void print(Node* root1){
	Node* temp =root1;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp=temp->next;
	}
	cout <<endl;
}

Node* reverse(Node* root){

	Node *head =root;
	Node *prev, *nextnode;
	prev=NULL;
	
	while(head!=NULL){
		nextnode=head->next; //as due to head->next=prev link will be broken so to point to next node
		head->next=prev; //address of previous node
		prev=head; // now prev will point to current node
		head=nextnode; //and head will move to next node

	}
	root=prev;//prev points to current node
	return root; //as root is changed now
}


int main(){
	//nodes are inserted right to left
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	print(root);
	root=reverse(root);
	print(root);
}