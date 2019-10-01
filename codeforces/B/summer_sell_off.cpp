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

ll n, x, t;
cin >> n >> x;
ll sum=0;
ll arr[n];
for(int i=0;i<n;i++){
	ll a, b;
	cin >> a >> b;
	t=min(a,b);
	sum+=t;
	arr[i]=(min(2*a,b)-t);

}

sort(arr, arr+n);
for(int i=n;i>n-x;i--){
	sum+=arr[i-1];
}

cout << sum;

}

