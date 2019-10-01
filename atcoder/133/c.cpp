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
ll a, b;
cin >> a >> b;
ll ans =INT_MAX;
if(a<2019 && b<=2019){
	for(int i=a; i<=b; i++){
		for(int j=a+1; j<=b; j++){
			ll sum = (i*j)%2019;
			//cout << i*j << " ";
			ans = min(ans, sum);
		}
	}
	cout << ans << endl;
	return 0;
}
else if(a>2019 && b>2019){
	cout << (a*(a+1))%2019 << endl;
}
else if(a==2019 && b==2019){
	cout << (a*b)%2019 << endl;

}
else{
	cout << (a*b)%2019 << endl;
}

return 0;
}

