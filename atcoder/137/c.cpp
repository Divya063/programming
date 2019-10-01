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

sort(arr, arr+n);
float ans = (arr[0]+arr[1])/2;
for(int i =2; i<n; i++){
	ans = (ans+arr[i])/2;
}
cout << ans << endl;
return 0;
}

