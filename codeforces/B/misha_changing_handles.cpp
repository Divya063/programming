#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

map<string, string> arr;
set<string> map1;
map<string, string> ans;


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

int n;
cin >> n;

for(int i=0;i<n;i++){

	string a, b;
	cin >> a >> b;
	arr[a]=b;
	map1.insert(b);


}

for(auto i : arr){

	if(map1.count(i.first))
		continue;
	auto curr =i.first;
	while(arr.count(curr)){
		curr=arr[curr];
	}

	ans[i.first]=curr;
}

cout << ans.size() << endl;
for(auto j: ans){
	cout << j.first << " " << j.second << endl;
}


return 0;
}
