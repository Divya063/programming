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

ll a,b, c,d;
cin >> a >> b >> c >>d;
ll count=0;

for(ll i=a; i<=b; i++){
if(i%c!=0 && i%d!=0)
	count++;
}
cout << count;
return 0;
}

