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

ll n;
cin >> n;
string s;
cin >> s;
char arr[11];
for(int i=0; i<9; i++){
	cin >> arr[i];
}
string ans="";
string sub;
for(ll i=0; i<n; i++){
	if(s[i]<=arr[i]){
		ans+=arr[i];
	}
	else if(s[i]> arr[i]){
		ans+=s[i];
		if(i+1<n)
		sub=s.substr(i+1, n);
		string ans1= ans+sub;


	}
}


return 0;
}

