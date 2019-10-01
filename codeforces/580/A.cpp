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
cin >> n;
ll arr[n];
unordered_set<int> map;
for(int i =0; i<n; i++){
	cin >> arr[i];
	map.insert(arr[i]);
}

ll m;
cin >> m;
ll arr1[m];
for(int i =0; i<m; i++){
	cin >> arr1[i];
	map.insert(arr1[i]);

}

for(int i =0; i<n; i++){
	for(int j =0; j<m; j++){
		//cout << arr1[j] << endl;
		if(map.find(arr[i]+arr1[j])==map.end()){
			cout << arr[i] << " " << arr1[j] << endl;
			return 0;
		}
	}
}

return 0;
}

