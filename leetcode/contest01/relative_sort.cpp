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

vector <int> arr= {2,3,1,3,2,4,6,7,9,2,19};
vector <int> arr1= {2,1,4,3,9,6};
vector<int> ans;
vector<int> ans1;
for(auto i : arr1){
	for(auto j : arr){
		if(i==j){
			ans.push_back(j);
		}

	}
}

set<int> hash(arr1.begin(), arr1.end());


for(auto i : arr){
	if (hash.find(i)==hash.end()){
		ans1.push_back(i);
	}
}

sort(ans1.begin(), ans1.end());
for(auto i : ans1){
	ans.push_back(i);
}

for(auto j : ans){
	cout << j << " ";
}
return 0;
}

