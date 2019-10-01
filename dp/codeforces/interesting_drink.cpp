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
int arr[n];
for(int i=0;i<n;i++){

	cin >> arr[i];
}
sort(arr, arr+n);
ll num;
cin >> num;
for(int i =0; i<num;i++){
	int query;
	cin >> query;
	if(query<arr[0]){
		cout << 0 << endl;
	}
	else
	cout << upper_bound(arr, arr+n, query)-arr << endl;
	
}



return 0;
}

