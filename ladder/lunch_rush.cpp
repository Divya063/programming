#include<bits/stdc++.h>

using namespace std;


int main(){

	int m, n, joy;
	cin >> m >> n;
	int ans=INT_MIN;
	for(int i=0;i<m;i++){

		int f1, t1;
		cin >> f1 >>t1;
		if(t1>n){
			joy = f1-(t1-n);
		}
		else joy=f1;

		if(joy>ans){

			ans=joy;
		}

	}

	cout << ans <<endl;


	


}