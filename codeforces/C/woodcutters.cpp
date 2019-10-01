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
int arr[N], arr1[N];
for(int i=0;i<n;i++){
	cin >> arr[i] >> arr1[i];
}
int count = 2;
for(int i=1;i<n-1;i++){
	if(arr[i]-arr1[i]>arr[i-1]){
		count++;
	}
	else if(arr[i]+arr1[i]<arr[i+1]){ //right fall should not touch next tree
		count++;
		arr[i]+=arr1[i];
	}
}

if (n==1){
	cout << 1;
}
else
cout << count << endl;

return 0;
}

