#include<bits/stdc++.h>

using namespace std;

template<typename T>


class Graph{


	unordered_map<T, list<pair<T, int>>> adjList;

public:
	Graph(){

	}
	
	void addEdge(T u, T v, T w){
		adjList[u].push_back(make_pair(v, w));
		adjList[v].push_back(make_pair(u, w));
	}

	void dijsktra(T src){
		unordered_map<T, int> dist;
		for(auto m: adjList){
			dist[m.first] = INT_MAX;
		}

		set<pair<int, T>> s;
		s.insert(make_pair(0, src));
		dist[src]=0;
		while(!s.empty()){

			auto n = *(s.begin()); //s.begin() is pointer
			int dist1=n.first;
			T node =n.second;
			s.erase(s.begin());
			//erase when finalised
			for(auto children: adjList[node]){
				if(children.second+dist1<dist[children.first])
				{
					//In the set updation of a particular is not possible
                    // we have to remove the old pair, and insert the new pair to simulation updation
					auto f = s.find(make_pair(dist[children.first], children.first));
					if(f!=s.end()){
						s.erase(f);
					}
					//insert new node
					dist[children.first]=children.second+dist1;
					s.insert(make_pair(dist[children.first], children.first));

				}
			}


		}

		//Lets print distance to all other node from src
        for(auto d:dist){
            
            cout<<d.first<<" is located at distance of  "<<d.second<<endl;
        }

		
	}

};



int main(){
	
	Graph<int> g;
    g.addEdge(1,2,1);
    g.addEdge(1,3,4);
    g.addEdge(2,3,1);
    g.addEdge(3,4,2);
    g.addEdge(1,4,7);
    //g.printAdj();
   g.dijsktra(1);


}