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
if(n%2 && m%2){
	cout << (n/2+m/2);
}

else if(n%2==0 && m%2==0){
	if(n==2){
		cout << m/2;
	}
	else if (m==2){
		cout << n/2;
	}
	else{
		cout << m/2+n/2;
	}
}
else{
	cout << n/2 + m/2;
}
return 0;
}

