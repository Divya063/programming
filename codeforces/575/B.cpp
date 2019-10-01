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
cin >>n;
while(n--){
	ll num, size;
	cin >> num >> size;
	ll arr[num];
	ll count =0;
	for(ll i = 0; i<num; i++){
		cin >> arr[i];
		if(arr[i]%2){
			count++;
		}
	}

	if(count<size || count%2!=size%2){
		cout << "NO" << endl;
		continue;
	}
	cout << "YES" << endl;
	for(int i =0; i<num; i++){
		if (size==1)
			break;
		if(arr[i]%2==1){
			cout << i+1 << " ";
			size--;
		}
	}
	cout << num << endl;
	
}
return 0;
}

