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
int n, w;
cin >> n >> w;
int L[N], R[N], arr[n];
int k= n-w+1;
for(int i=0;i<n;i++){

	cin >> arr[i];
}

for(int i=0;i<=n;i++){
	if(i%w==0){
		L[i]=arr[i];
	}
	else{
		L[i] = max(arr[i], L[i-1]);
	}
}

for(int i = n-1;i>=0;i--){
	if(i==n-1)
		R[i]=arr[i];
	else if(i%w==w-1)
		R[i]=arr[i];
	else
		R[i]=max(R[i+1], arr[i]);
}



for(int i=0;i<k;i++){
	cout << max(R[i], L[i+w-1]);
}


return 0;
}

