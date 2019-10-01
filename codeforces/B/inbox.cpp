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

vector<ll> arr;
ll num;
for(int i=0;i<n;i++){

	cin >> num;
	arr.push_back(num);
}

int count =0;

arr[n]=-1;

for(int i=0;i<n;i++){

	if(arr[i]==1)
		count++;

	if(arr[i]==1 && arr[i+1]==0){
		count=count+1;
	}
}

if(arr[n-1]==0)
	count--;

cout << max(count, 0) << endl;


	


return 0;
}

