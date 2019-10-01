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
ll n, m;
cin >> n >> m;
char arr[n][m];
for(ll i=0; i<n; i++){
	for(ll j=0; j<m; j++){
		cin>> arr[i][j];
	}
}
ll count=0;
for(ll i =0; i<n; i++){
	for(ll j =0; j<m; j++){

		if(arr[i][j]=='s'){
			if(i+3<n)
			if(arr[i+1][j]=='a' && arr[i+2][j]=='b' && arr[i+3][j]=='a')
				count++;
			if(j+3<m)
			if(arr[i][j+1]=='a' && arr[i][j+2]=='b' && arr[i][j+3]=='a')
				count++;
			if(j+3<m && i+3<n)
			 if(arr[i+1][j+1]=='a' && arr[i+2][j+2]=='b' && arr[i+3][j+3]=='a')
				count++;
		}
		 if(arr[i][j]=='s'&& j+3<m && i-3>=0 ){
			if(arr[i-1][j+1]=='a' && arr[i-2][j+2]=='b' && arr[i-3][j+3]=='a')
				count++;
		}
	}
}
cout << count << endl;
return 0;
}

