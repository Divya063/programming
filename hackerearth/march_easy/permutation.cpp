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

int t;
cin >> t;
while(t--){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	while(!(is_sorted(arr, arr+n))){
	for(int i=0;i<n;i++){
		arr[i]=arr[arr[i]];
	}
}
}
return 0;
}

