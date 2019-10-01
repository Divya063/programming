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
int a, b;
cin >> a >> b;
if(a>=13)
	cout << b;
else if(a>6 && a<12)
	cout << b/2;
else if(a==6||a==12)
	cout << b/2;
else
	cout << 0;
return 0;
}

