#include<bits/stdc++.h>

using namespace std;

int main(){

int n,m;
cin >> n>> m;
int arr[n][m];
int dp[n][m]={0};
int x, y;
cin >> x >> y;
for(int i=0; i<n;i++){
	for(int j=0;j<m;j++){

		cin >> arr[i][j];
	}
}

dp[x-1][y-1] = arr[x-1][y-1];

for(int i=x;i<n;i++){
	dp[i][y-1]= dp[i-1][y-1]-arr[i][y-1];
}

for(int i=y;i<m;i++){
	dp[x-1][i]= dp[x-1][i-1]-arr[x-1][i];
}


for(int i=x;i<n;i++){
	for(int j=y;j<m;j++){

		dp[i][j]= max(dp[i-1][j], dp[i][j-1])-arr[i][j];
	}
}

/*
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){

		cout << dp[i][j] << " ";
	}

	cout << "\n";
}
*/

if(dp[n-1][m-1]>=0)
cout << "Y" << " "<<dp[n-1][m-1] << endl;
else
cout << "N";






}