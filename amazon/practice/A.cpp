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

vector<vector<int>> allocations({{1, 2}, {3, 4}, {1, -1}});
int n = allocations.size();
int m = allocations[0].size();
int sum=0, count=0;
multimap<double, int> map;

for(int i=0;i<n;i++){
	for(auto j: allocations[i]){
		sum+=pow(j,2);
	}
	map.insert({sum, i});
	sum=0;
}

vector<vector<int>>ans;
for(auto i:map){
	vector<int> ans1;
	for(auto j : allocations[i.second]){
		ans1.push_back(j);
	}
	count++;
	if(count<=2){
	ans.push_back(move(ans1));
	}
	else
		break;
}

for(auto k: ans){
	for(auto m: k){
		cout << m << " ";
	}
	cout << endl;
}



return 0;
}

