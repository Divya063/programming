#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

int recurse(string s1, string s2, ll size){
	if(s1 == s2)
		return true;

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
string s1, s2;
cin >> s1 >> s2;
ll ans = 0;
for(int i =0; i<n; i++){
	if(s1[i] != s2[i]){
		if(s1[i+1] != s2[i+1] && s1[i]=='1' && i+1<n && s2[i+1]=='1'){
			swap(s1[i], s1[i+1]);
			ans++;
		}
		else{
			ans++;
		}
	}

}

cout << ans << endl;

return 0;
}

