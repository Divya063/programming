#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


map<int, list<int>> map1;
int check=1;

void dfs(int n){
	if(map1[n].size()==0)
		return;
	int count1=0;
	for(auto i :map1[n]){
		if(map1[i].size()==0)
			count1++;
	}
	if(count1<3){
		check=0;

	}

	for(auto i:map1[n]){
		dfs(i);
	}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

ll n;
cin >> n;
for(int i=2;i<=n;i++){

	int v;
	cin >> v;
	map1[v].push_back(i);

}
dfs(1);
if(check)
	cout << "Yes";
else
	cout << "No";


return 0;


}

