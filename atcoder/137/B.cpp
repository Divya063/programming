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
cin >> n >> m;
ll i = m-n+1;
ll j = m+n-1;
for(int k = i; k<=j; k++){
	cout << k << " ";
}
return 0;
}

