#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head;

Node* getNewNode(int x){

	Node* newnode=new Node;
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
}

void print(Node *tempo){

	Node* current =tempo;
	while(current!=NULL){
		cout << current->data << " " <<endl;
		current=current->next;

	}
}

void insert(int x){

	Node* headnode= getNewNode(x);
	if(head==NULL){
		head= headnode;
		return;
	}
	headnode->next=head; //elemtent inserted first will be at last root contatins the adress of the first element inserted so during
	head=headnode; //insertion of second node the node->next should point to element inserted first
}


 Node* reverse(Node *r){
	Node* current=r;
	Node* nextnode, *prev;
	prev=NULL;
	while(current!=NULL){
		nextnode=current->next;
		current->next=prev;
		prev=current;
		current=nextnode;
	}
	r=prev;
	return r;
}
bool compare(Node *head1, Node *head2){
	struct Node* temp1 = head1; 
    struct Node* temp2 = head2; 
  
    while (temp1 && temp2) 
    { 
        if (temp1->data == temp2->data) 
        { 
            temp1 = temp1->next; 
            temp2 = temp2->next; 
        } 
        else return 0; 
    } 
  
    /* Both are empty reurn 1*/
    if (temp1 == NULL && temp2 == NULL) 
        return 1; 
  
   
    return 0; 
}

bool isPalindrome(Node* a){

	Node* fast_ptr =a;
	Node* secondpointer =a;
	Node* prevnode=a;
	Node* secondhalf;
	Node* midnode=NULL;
	bool res=true;
	if(a!=NULL && a->next!=NULL){

		/*
		In even case fast_ptr will be null
		secondpointer should point to middle node in case of odd number of list it is not pointing to middle node
		so we do seconpointer=secondpointer->next, and store the midpoint also prevnode points to the node just behinf the middle node)
		In case of even list second pointer points to second middle point which can directly be reversed like in 1->2->2->3, it will point 
		to second two*/

		while(fast_ptr!=NULL && fast_ptr->next!=NULL){
			fast_ptr=fast_ptr->next->next;
			prevnode=secondpointer;
			secondpointer=secondpointer->next;
		}
		if(fast_ptr!=NULL){
			midnode=secondpointer;
			secondpointer=secondpointer->next;
		}

			secondhalf=secondpointer;
			//cout << "secondhalf before" <<endl;
			print(secondhalf);
			secondhalf=reverse(secondhalf);
			//cout << "secondhalf after" <<endl;
			print(secondhalf);
			prevnode->next=NULL; // so that the links get broken, changing the prev node will change the lsit thats how you separate the list
			res=compare(a,secondhalf);
			//cout << res <<endl;
			reverse(secondhalf);
			if(midnode!=NULL){
				prevnode->next=midnode;
				midnode->next=secondpointer;

			}
			else{
			prevnode->next=secondhalf; // joing the half part to get original list
		}


	}
	return res;

}


int main(){

	char str[] = "aaaa"; 
    int i; 
  
    /**for (i = 0; str[i] != '\0'; i++) 
    { 
       insert(str[i]);
       
    } */

    insert(1);
    insert(2);
    insert(3);
    insert(2);
    insert(1);

    isPalindrome(head)? printf("Is Palindrome\n\n"): 
                           printf("Not Palindrome\n\n"); 
    print(head);
  
    return 0; 
}