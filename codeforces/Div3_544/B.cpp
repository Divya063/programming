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

ll n, k;
cin >> n >> k;
int c=0;
ll arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i]
}

sort(arr, arr+n);
int l=0;
int r=n-1;
while(l<r){
	if((arr[l]+arr[r])%k==0){
		l++;
		r--;
	}
	if()

}
cout << 2*count << endl;
return 0;
}

