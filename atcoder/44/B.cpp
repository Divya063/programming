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
string s;
cin >> s;
ll count=0;
map<char, int> map1;
for(auto i : s){
	map1[i]++;
}
for(int i=0; i<s.length(); i++){
	if(map1[s[i]]%2!=0){
		cout << "No"; 
		return 0;
	}
}

cout << "Yes";
return 0;
}

