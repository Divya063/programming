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
ll n = s.length();
ll last, res, ans=0;

for(ll i =0; i< 1<<n-1; i++){
	last=0, res=0;
	for(int j =0; j<n; j++){
		last = last*10 + (s[j]-'0');
		if(i & (1<<j)){
			res+=last;
			last=0;
		}
	}

	ans+=res+last;
}

cout << ans << endl;
return 0;
}

