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

int n, k , m;
cin >> n >> m >> k;
vector< pair<int, int>> arr(n);
for(int i=0;i<n; i++){

	cin >> arr[i].first;
	arr[i].second=i;

}
ll sum=0, count=0;
vector<ll> visited (n,0);
sort(arr.begin(), arr.end(), greater<pair<int, int>>());
for(int i=0;i<m*k;i++){
	sum+=arr[i].first;
	visited[arr[i].second]=1;
}

vector<ll> ans;

for(int i=0;i<n;i++){

	if(visited[i]==1){
		count++;
	}
	if(count==m){
		ans.push_back(i+1);
		count=0;
	}

}
cout << sum << endl;

for(int i =0;i<k-1;i++){
	cout << ans[i] << " ";
}


return 0;
}

