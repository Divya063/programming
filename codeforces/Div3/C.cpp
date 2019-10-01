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

ll t;
cin >> t;
while(t--){
	ll k,n,a,b, x;
	cin >> k >> n >> a >> b;
	if(k-n*b <=0){
		cout << -1 << endl;
		continue;
	}

	ll temp = (k-n*b)/(a-b); //upper bound
	if((k-n*b)%(a-b)){
		x= temp;
	}
	else{
		x = temp-1;
	}

	if(x>n){
		x =n; 
	}

	cout << x << endl;

}
return 0;
}

