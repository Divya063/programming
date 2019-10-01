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
for(int i=0;i<n;i++){
	cin >> arr[i];
}

sort(arr, arr+n);
cout << arr[n-1]-arr[0] << " ";
long long max1=0, min1=0;
for(int i=0;i<n;i++){

	max1+= (arr[i]==arr[n-1]);
	min1+= (arr[i]==arr[0]);

}
//cout << max1 << " " << min1;
if(arr[0]==arr[n-1]){
	cout << (n*(n-1))/2;
}
else
	cout << max1*min1; 
return 0;
}

