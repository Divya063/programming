#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
int c[N];
void print(int n){
	cout << "TAK" << endl;
	for(int i=0; i<n; i++){
		cout << c[i] << " ";
	}
	exit(0);

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
map<int, int> map1;
ll n, m;
cin >> n >> m;
int arr[n][m];
for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		cin >> arr[i][j];
	}
}
int sum=0;
int flag=0;

for(int i=0; i<n; i++){
	sum^=arr[i][0];
	c[i]=1;
}
//cout << sum;
	if(sum!=0){
		flag=1;
		print(n);
	}
	else{
		for(int i=0; i<n; i++){
			for(int j=1; j <m; j++){
				if(arr[i][0]!=arr[i][j]){
					c[i]=j+1;
					flag=1;
					print(n);
				}
			}
		}
	}

if(flag==0){
	cout << "NIE";
}
return 0;
}

