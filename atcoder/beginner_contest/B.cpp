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
ll r, d, x;
cin >> r >> d >> x;
for(int i =0; i<10; i++){
	ll next= (r*x)-d;
	cout << next << endl;
	x=next;
}
return 0;
}

