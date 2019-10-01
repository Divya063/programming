#include<bits/stdc++.h>

using namespace std;

#define int long long


int main(){

	int n;
	cin >> n;
	int input;
	vector<int> arr;
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		cin >> input;
		arr.push_back(input);
	}

	for(int i=0;i<n;i++){
			pq.push(arr[i]);
			if(pq.size()<3){
				cout <<"-1" <<endl;
				continue;
			}

			long long x=pq.top();
			pq.pop();
			long long y= pq.top();
			pq.pop();
			long long z=pq.top();
			pq.pop();
			pq.push(x);
			pq.push(y);
			pq.push(z);

			x=x*y;
			x=x*z;
			cout << x <<endl;
			

	}

}