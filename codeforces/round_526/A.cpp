#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	int coins[6]={2,3,4,5,6,7};
	for(int i=0;i<t;i++){

		int V;
		cin >> V;
		int table[V+1]; 
		table[0] = 0; 
		for (int i=1; i<=V; i++) 
        table[i] = INT_MAX; 
    	for (int i=1; i<=V; i++) 
    	{ 
        for (int j=0; j<6; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = table[i-coins[j]]; 
              if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
          } 
    	} 
    cout<< table[V] <<endl; 

    
	}
}