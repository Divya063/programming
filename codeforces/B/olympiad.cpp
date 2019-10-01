#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main(){

	ll n, l, r, x;
	
	cin >> n >> l >> r >> x;

	ll arr[n];
	ll count=0;

	for(ll i=0;i<n;i++){

		cin >> arr[i];
	}
	sort(arr, arr+n);
	ll subset = 1<<n; //powerset
	for(int i=1;i<subset;i++)
	{
		ll sum=0;
		ll first=0;
		ll last=0;
		for(int j=0;j<n;j++){

			if((i &(1<<j))>0){
			if(first==0){

				first=arr[j];
			}

			last=arr[j];
			sum+=arr[j];

		}
	}
		int diff = last-first;
		if(sum>=l && sum<=r && diff>=x)
			count++;
	}

	cout << count <<endl;



}