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
string ans;
for(int i=0; i<s.length(); i++){
	if(s[i]=='0')
		ans+='0';
	else if(s[i]=='1')
		ans+='1';
	else if(s[i]=='B' && i!=0){
		ans= ans.substr(0, ans.length()-1);
	}
}
cout << ans << endl;
return 0;
}

