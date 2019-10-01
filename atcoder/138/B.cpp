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
ll n;
cin >> n;
float arr[n];
for(int i =0; i<n; i++){
	cin >> arr[i];
}
float sum =0.0;
for(int i =0; i<n; i++){
	float a = 1/arr[i];
	sum+=a;
}
float ans = 1/sum;
cout << ans << endl;

return 0;
}

