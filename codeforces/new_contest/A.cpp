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

string match="ACTG";
int n;
cin >> n;
string s;
cin >> s;
int count=0;
int ans=INT_MAX;
for(int i=0; i<n-3; i++){
	count=0;
	for(int j =0; j<4; j++){
		count+=min(abs(match[j]-s[i+j]), 26-abs(match[j]-s[i+j]));
	}

	ans=min(ans, count);

}
cout << ans;

return 0;
}

