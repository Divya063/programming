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
vector<int> hours = {9,9,6,0,6,6,9};
vector <int> ans;
for(auto i : hours){
	if(i>8){
		ans.push_back(1);
	}
	else{
		ans.push_back(0);
	}

}

for(auto i : ans){
	cout << i << " ";
}
return 0;
}

