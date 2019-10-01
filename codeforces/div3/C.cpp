#include<bits/stdc++.h>

using namespace std;

const int MAX = 1e6;


int main(){
	
	int n, num1;
	cin >> n;
	vector<int> arr(n);
	vector<int> count(MAX + 1);
	long long sum=0;
	for(int i=0;i<n;i++){

		cin >> arr[i];
		sum=sum+arr[i];
		++count[arr[i]];

	}
	vector<int> ans;
	for(int i=0;i<n;i++){
		sum = sum-arr[i];
		--count[arr[i]];
		if(sum%2==0 && sum/2 < MAX && count[sum/2]>0){
			ans.push_back(i);
		}
		sum = sum + arr[i];
		++count[arr[i]];

	}
	cout << ans.size() <<endl;
	for(int i=0;i<ans.size();i++){

		cout << ans[i]+1 << " ";
	}
	cout << char(0);

}