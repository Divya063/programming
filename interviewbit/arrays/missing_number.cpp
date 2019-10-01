#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

map<int, list<int>> node;

void dfs(int src){

	for(auto i : node[src]){
		dfs(i);
	}
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll num;
cin >> num;
int arr[num];
for(int i =0; i<num; i++){
	cin >> arr[i];
	node[i].push_back(arr[i]);
}

for(int i=0; i<)


return 0;
}

