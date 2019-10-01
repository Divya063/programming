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

int n, m, h;
cin >> n >> m >> h;
int front[m], left[n];
for(int i=0;i<m;i++){
	cin >> front[i];
}

for(int i=0;i<n;i++){
	cin >> left[i];
}
int arr[n][m];
for(int i=0;i<n;i++){
	for(int j =0;j<m;j++){
		cin >> arr[i][j];
	}
}

for(int j =0; j<m; j++){
	if(arr[n-1][j]==1){
		arr[n-1][j] = front[j];
	}
	else{
		for(int k=0; k <n;k++){
			if(arr[k][j]==1)
				arr[k][j]= front[j];
		}
	}
}

for(int i =0;i<n;i++){
	if(arr[i][0]==1)
		arr[i][0] = left[i];
	else{
		for(int k =0;k<m;k++){
			if(arr[i][k]==1){
				arr[i][k]=left[i];
				break;
			}
			else
				if(arr[i][k]!=0){
					for(int s=0; s<n; s++){
						if(front[k]==arr[s][k]){
							arr[i][k]=left[i];
							break;
						}
					}
				}
		}
	}
}

for(int i=0;i<n;i++){
	for(int j =0;j<m;j++){
		cout << arr[i][j] << " ";
	}

	cout << endl;
}


return 0;
}

