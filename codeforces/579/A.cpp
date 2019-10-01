#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


bool sorted(ll arr[], ll size){
	for(ll i =0; i<size-1; i++){
		if(!(arr[i]<arr[i+1]))
			return false;
	}
	return true;
}

bool descending(ll arr[], ll size){
	for(ll i =0; i<size-1; i++){
		if(!(arr[i]>arr[i+1]))
			return false;
	}
	return true;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
while(n--){

	ll num;
	cin >> num;
	ll arr[num], b[num], c[num];
	for(int i =0; i<num; i++){
		cin >> arr[i];
		

	}
	ll k = distance(arr, max_element(arr, arr+num));
	//cout << k << endl;
	ll clockk = num-k-1;
	ll antik = k; 

	for(int i =0; i<num; i++){
		b[(i+clockk)%num]= arr[i];
		c[i] = arr[(i+antik)%num];
	}

	// for(int i =0; i<num; i++){
	// 	cout << b[i] << " ";
	// }

	// cout << endl;

	// for(int i =0; i<num; i++){
	// 	cout << c[i] << " ";
	// }

	if(sorted(b, num) || descending(c, num)){
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

}


return 0;
}

