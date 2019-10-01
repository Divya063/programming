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
for(int i=0; i<n; i++){
	cin >> arr[i];
}
for(int i=0; i<n; i++){
	ll index = arr[i]%(n-2);
	arr[index]+=n-2;
}


for(int i=0; i<n; i++){
	cout << arr[i] <<" ";
	if(arr[i]/(n-2) >1){
		cout << "ans" << i<< endl;
	}
}


return 0;
}

