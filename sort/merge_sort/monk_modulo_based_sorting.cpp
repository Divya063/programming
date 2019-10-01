#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

void merge(ll *arr, ll start, ll mid, ll end, ll mod){

	ll i = start, j = mid+1;
	ll temp[end-start+1];
	int k = 0;
	while(i<=mid && j<=end){
		if(arr[i]%mod<=arr[j]%mod){
			temp[k] = arr[i];
			k++;
			i++;
		}
		else{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}

	while(i<=mid){
		temp[k] = arr[i];
		i++;
		k++;
	}

	while(j<=end){
		temp[k] = arr[j];
		j++;
		k++;
	}

	for(i = 0; i <k; i += 1) {
		arr[start+i] = temp[i];
	}
}


void merge_sort(ll *arr, ll start, ll end, ll k){
	if(start < end){
	ll mid = start + (end-start)/2;

	merge_sort(arr, start, mid, k);
	merge_sort(arr, mid+1, end, k);
	merge(arr, start, mid, end, k);
}

}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

ll n, m;
cin >> n >> m;
ll arr[n];
for(int i =0; i<n; i++){
	cin >> arr[i];
}
merge_sort(arr, 0, n-1, m);
for(int i =0; i<n; i++){
	cout << arr[i] <<  " ";
}

return 0;
}

