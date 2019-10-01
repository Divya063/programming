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
ll n, target;
cin >> n >> target;
ll arr[n];
for(int i =0; i<n; i++){
	cin >> arr[i];
}
vector<vector<int>> ans;
vector<int> ans1;

ll superset = 1<<n;
for(int i =0; i< superset-1; i++){
	for(int j =0; j<n; j++){
		if(i&(j<<1)){
			
		}
	}
}
return 0;
}

