#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node* next;
};

int length(Node* a){
	Node* head=a;
	int count=0;
	while(head!=NULL){
		head=head->next;
		count++;
	}
	return count;
}

Node* mergepoint(Node* a, Node* b){
	int m= length(a);
	int n= length(b);
	int d = n-m;
if(m>n){

	Node* temp;
	temp=a;
	a=b;
	b=temp;
}
for(int i=0;i<d;i++)
{
	b=b->next;
}

while(a!=NULL && b!=NULL){

	if(a==b){

		return a;
	}
	a=a->next;
	b=b->next;
}
return NULL;


}


int main(){
	struct Node* newNode;
struct Node* head1 =new Node();
	head1->data = 10;

struct Node* head2 =new Node();
head2->data = 3;

newNode = new Node();
newNode->data = 6;
head2->next = newNode;

newNode = new Node();
newNode->data = 9;
head2->next->next = newNode;

newNode = new Node();
newNode->data = 15;
head1->next = newNode;
head2->next->next->next = newNode;

newNode = new Node();
newNode->data = 30;
head1->next->next= newNode;

head1->next->next->next = NULL;
 Node* C=mergepoint(head2, head1);
 cout << C->data;

}