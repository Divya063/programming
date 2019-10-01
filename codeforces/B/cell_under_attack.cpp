#include<bits/stdc++.h>

using namespace std;


int main(){
	long long n, m;
	cin >> n >> m;
	long long sum=n*n;
	unordered_set<long long> horizontal;
	unordered_set<long long> vertical;
	for(long long i=0;i<m;i++){

		long long x, y;
		cin >> x >> y;
		horizontal.insert(x);
		vertical.insert(y);
		long long count= (horizontal.size()*n)+ (vertical.size()*n)-(horizontal.size()*vertical.size());
		long long ans=sum-count;
		cout << ans << " ";
	}

}