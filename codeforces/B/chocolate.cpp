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
int n;
cin >> n;
ll arr[n];
for(ll i=0;i<n;i++){
	cin >> arr[i];
}
ll result =0;
ll prev = -1;
for(ll i=0;i<n;i++){
	if(arr[i]==1){
		if(prev==-1){
			result=1;
		}
		else{
			result*=(i-prev);
		}
		prev =i;
	}
}

cout << result;
return 0;
}

 