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

ll n, a, b, x, y;
cin >> n >> a >> b >> x >> y;

while(a!=b && x!=y){
	if(a<n){
		a=a+1;
	}
	else if(a==n){
		a=1;
	}
	if(x>1){
		x=x-1;
	}
	else if(x==1){
		x=n;
	}
	if(a==x){
		cout << "YES" << endl;
		return 0;
	}
}
cout << "NO" << endl;
return 0;
}

