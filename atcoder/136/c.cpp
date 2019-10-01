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
ll arr[n];
for(int i =0; i<n; i++){
	cin >> arr[i];
}

for(int i = n-1; i>0; i--){
	if(arr[i-1]>arr[i]){
		arr[i-1]= arr[i-1]-1;
		if(arr[i-1]>arr[i] || (i!= n-1 && arr[i]>arr[i+1])){
			cout << "No";
			return 0;
		}
	}

}

cout << "Yes" << endl;
return 0;
}

