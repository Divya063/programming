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

ll n;
float a;
cin >> n >> a;
ll arr[n];

ll powset= 1LL<<n;

vector<vector<int>> map(powset, vector<int>());

for(ll i=0; i<n; i++){
	cin >> arr[i];
}

for(int i=0; i<powset; i++){
	for(int j=0; j<n; j++){
		if(i &(1LL<<j)){
			map[i].push_back(arr[j]);
		}
	}
}

ll count=0;
for(auto i : map){
	float sum=0;
	for(auto j : i){
		sum=sum+j;
	}
	if(i.size()!=0){
		float ans= sum/float(i.size());
		if(ans==a){
		count++;
		}
	}
}

cout << count;


return 0;
}

