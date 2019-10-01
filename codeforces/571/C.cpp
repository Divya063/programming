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
string n, n1;
cin >> n >> n1;
ll countn1 = 0;
for(int i=0; i<n1.length(); i++){
	if(n1[i]=='1'){
		countn1++;
	}
}
ll sum[N];
for(int i=0; i<n.length(); i++){
	sum[i+1]= sum[i] + (n[i]-'0');
}

ll ans=0;
for(int i = n1.length(); i<=n.length(); i++){
	if((sum[i]-sum[i-n1.length()])%2 == countn1%2){
		ans++;
	}
}

cout << ans << endl;

return 0;
}

