#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pp;
const int MAX = 1e4 + 5;
int id[MAX], nodes, edges;
pair <long long, pp > p[MAX];



struct Node{

	int id,rank,data;
    Node *parent;
};

unordered_map<int,Node*> forest;


 Node* findSet(Node* node) {
        Node* parent = node->parent;
        if (parent == node) {
            return parent;
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
    forest.insert(make_pair(data, newnode));

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


    long long kruskal(pair<long long, pair<int, int> > p[])
    {
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(find(x) != find(y))
        {
            minimumCost += cost;
            union1(x, y);
        }    
    }
    return minimumCost;
}




    


int main(){



    int x, y;
    long long weight, cost, minimumCost;
    initialize();
    cin >> nodes >> edges;

    for(int i = 1;i <= nodes; ++i){

		makeSet(i);
    }


    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    // Sort the edges in the ascending order
    sort(p, p + edges);
    minimumCost = kruskal(p);
    cout << minimumCost << endl;
    return 0;

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