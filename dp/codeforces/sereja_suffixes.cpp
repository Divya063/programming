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

int n, m;
cin >> n >> m;
unordered_set<int> map;
int arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];

}
int ans[n];
for(int i = n-1;i>=0;i--){
	map.insert(arr[i]);
	ans[i]=map.size();
}

for(int j=0;j<m; j++){
	int query;
	cin >> query;
	query--;
	cout << ans[query] << endl;
}

return 0;
}

