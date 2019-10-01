#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll gcd(ll a, ll b){
	if(a<b)
		swap(a,b);
	if(a%b==0)
		return b;
	gcd(b, b%a);
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
ll arr[n];
for(int i =0; i<n; i++){
	cin >> arr[i];
}

if(n==1){
	cout << 1;
}


else{

	ll ans = gcd(arr[0], arr[1]);
	for(int i = 1; i<n; i++){
		ans = gcd(arr[i], ans);
	}
	ll flag = 0;
	ll count =0;
	for(int j =1; j<=ans; j+){
		flag =0;
		for(int i =0; i<n; i++){
			if(arr[i]%j!=0){
				flag =1;
				break;
			}
		}
		if(flag == 0){
			count++;
		}

	}

	cout << count << endl;



}



return 0;
}

