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
int flag=0;

for(int i=0;i<n-3+1;i++){

	if(arr[i]+arr[i+1]>arr[i+2] && arr[i+2]+arr[i+1]> arr[i] && arr[i]+arr[i+2]>arr[i+1]){
		flag=1;
		break;
	}

}
if(flag)
	cout << "YES";
else
	cout << "NO";
}

