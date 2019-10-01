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
ll arr_size, k;

while(n--){
	cin >> arr_size >> k;
	ll arr[arr_size];
	for(int i =0; i<arr_size; i++){
		cin >> arr[i];
	}
	int min = *min_element(arr, arr+arr_size);
	int max = *max_element(arr, arr+arr_size);

	if(max-k>min+k){
		cout << -1 << endl;
	}
	else 
		cout << min+k << endl;

}
return 0;
}

