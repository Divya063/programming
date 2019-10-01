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

int n, k;
cin >> n >> k;
char v;
cin >> v;
char arr[n+1][k+1];

for(int i=0;i<n;i++){

	for(int j=0; j<k; j++){

		cin >> arr[i][j];
	}
}
unordered_set<char> map1;
for(int i=0;i<n;i++){

	for(int j=0;j<k; j++){

			if(arr[i][j]==v){
				if(i!=0 && arr[i-1][j]!=v)
					map1.insert(arr[i-1][j]);
				if(i!=n-1 && arr[i+1][j]!=v)
					map1.insert(arr[i+1][j]);
				if(j!=0 && arr[i][j-1]!=v){
					map1.insert(arr[i][j-1]);
				}
				if(j!=k-1 && arr[i][j+1]!=v){
					map1.insert(arr[i][j+1]);
				}
			}

		}
	}

int x=0;
if(map1.find('.')!=map1.end())
	x--;
cout << map1.size()+x << endl;

return 0;
}

