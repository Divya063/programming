#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
map<int, int> map;
ll n;
cin >> n;
float arr[n];
for(int i =0; i<n; i++){
	cin >> arr[i];
}
for(int i =0; i<n; i++){
	for(int j = i+1; j<n; j++){
		float avg = (arr[i]*arr[j])/2;
		map[i+j] = avg;
	}
}
float cost;
for(auto add : map){
	for(int i =0; i<n; i++){

	   cost = map.second;
        for(int j =i+1; j <n ; j++){
        	if(i!=j){
        	if(add.first!=i+j){
        		cost = (cost*j)/2;
        	}
        }
        }
	}
}


return 0;
}

