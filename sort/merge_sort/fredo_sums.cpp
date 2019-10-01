#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
ll max_sum = 0;
ll total_sum =0;
ll min_sum = INT_MAX;

void merge(ll *arr, ll start, ll mid, ll end){

	ll i = start, j =  mid+1;
	ll k = 0;
	ll sum = 0, total = 0;
	while(i<=mid && j<=end){
		sum+=abs(arr[i]-arr[j]);

		if(total)

		i++;
		j++;
	}
}


void merge_sort(ll *arr, ll start, ll end){

	if(start < end){
		ll mid = start + (end-start)/2;
		merge_sort(arr, start, mid);
		merge_sort(arr, mid+1, end);
		merge(arr, start, mid, end);
	}
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
	ll arr[num];
	for(ll i =0; i<num; i++){
		cin >> arr[i];
	}

	merge_sort(arr, 0, num-1);
	cout << max_sum << " " << min_sum;


}
return 0;
}

