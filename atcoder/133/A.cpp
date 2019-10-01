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
int n, a, b;
cin >> n >> a >> b;
if((n*a)<b){
	cout << n*a;
}
else{
	cout << b;
}
return 0;
}

