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
set<int> arr1;
for(int i=0;i<n;i++){
	int num;
	cin >> num;
	arr1.insert(num);
}
n=arr1.size();
vector<int>arr(arr1.begin(), arr1.end());
sort(arr.begin(), arr.end(), greater<>());
int min1= arr[0]-arr[1];
if(n==1){
	cout << 0;
	return 0;
}
if(n==2){
	if(min1%2==0){
		cout << min1/2;
		return 0;
	}
}
if(arr[n-1]+min1==arr[0]){
	cout << min1;
	return 0;
}
else{
	if(arr[0]-min1==arr[n-1]+min1){

		cout << min1;
	}
	else
		cout << -1;
}

return 0;
}

