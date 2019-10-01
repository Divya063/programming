#include<bits/stdc++.h>

using namespace std;


int main(){


	int m, n, sum=0;
	cin >> m >> n;
	priority_queue<int> pq;

	for(int i=0;i<m;i++){
		int input;
		cin >> input;
		pq.push(input);

	}
	for(int i=1;i<=n;i++){
		long long x=pq.top();
		pq.pop();
		sum=sum+x;
		x=x-1;
		pq.push(x);

	}

cout << sum <<endl;


}
