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
ll n, m;
string str="";
cin >> n >> m;
multiset<string>map1;
for(ll i=0; i<n; i++){
	string s;
	cin >> s;
	map1.insert(s);
}
for(auto i : map1){
	str+=i;
}
cout << str;
return 0;
}

