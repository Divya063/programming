#include<bits/stdc++.h>

using namespace std;



struct Node{

	int id,rank,data;
    Node *parent;
};

unordered_map<int,Node*> forest;


 Node* findSet(Node* node) {
        Node* parent = node->parent;
        if (parent == node) {
            return parent;// searching the root
        }
        node->parent = findSet(node->parent); //path compression
        return node->parent;
    }


    /**
     * Finds the representative of this set
     */
    int findSet(int data) {
        return findSet(forest[data])->data;
    }

    /**
     * Find the representative recursively and does path
     * compression as well.
     */
   


void makeSet(int data){

	Node* newnode = new Node;
    (*newnode).data = data;
	newnode->parent = newnode;
    newnode->rank = 0;
    //forest.insert(data, newnode);
    forest[data]=newnode;

}

bool union1(int data1, int data2) {
        Node* node1 = forest[data1];
        Node* node2 = forest[data2];

        Node* parent1 = findSet(node1);
        Node* parent2 = findSet(node2);

        //if they are part of same set do nothing
        if (parent1->data == parent2->data) {
            return false;
        }

        //else whoever's rank is higher becomes parent of other
        if (parent1->rank >= parent2->rank) {
            //increment rank only if both sets have same rank
            parent1->rank = (parent1->rank == parent2->rank) ? parent1->rank + 1 : parent1->rank;
            parent2->parent = parent1;
        } else {
            parent1->parent = parent2; 
        }
        return true;
    }

    

int main(){

		makeSet(1);
        makeSet(2);
        makeSet(3);
        makeSet(4);
        makeSet(5);
        makeSet(6);
        makeSet(7);

        union1(1, 2);
        union1(2, 3);
        union1(4, 5);
        union1(6, 7);
        union1(5, 6);
        union1(3, 7);

        cout << findSet(1);
        cout << findSet(2);
        cout <<findSet(3);
        cout << findSet(4);
        cout << findSet(5);
        cout << findSet(6);
        cout << findSet(7);


}