#include <iostream>
#include<bits/stdc++.h>
#define N 100005

using namespace std;

pair<int, pair<int, int>> p[N];
int arr[N], size[N];

void initialize(){
    for(int i = 0; i<N; i++){
        arr[i] = i;
        size[i] = 1;
    }
}

int root(int a){
    while(a!=arr[a]){
        
        arr[a] = arr[arr[a]];
        a = arr[a];
    }
    
    return a;
}

void union1(int a, int b){
    int root_a = root(a);
    int root_b = root(b);
    
    if(size[root_a] < size[root_b]){
        
        arr[root_a] = arr[root_b];
        size[root_b] += 1;
    }
    else{
        arr[root_b] = arr[root_a];
        size[root_a] += 1;
    }
    
}



void krushkal(int edge){
    
    int x, y, cost;
    int minimumcost = 0;
    for(int i =0; i<edge; i++){
        cost = p[i].first;
         x= p[i].second.first;
         y= p[i].second.second;
        if(root(x)!=root(y)){
            minimumcost+=cost;
            union1(x, y);
            cout << x << " "<< y << " "<< cost << endl;
            
        }
    }
}


int main()
{
  int V, E;
  cin >> V >> E;
  initialize();
  for(int i =0; i<E; i++){
      long long u, v, w;
      cin >> u >> v >> w;
      p[i] = make_pair(w, make_pair(u, v));
  }
    sort(p, p+E);
    
    krushkal(E);

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */

  return 0;
}
