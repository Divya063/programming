#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;
	int a, b;
	cin >> a >>b;
	if(b==n&&(n-a)<(a-1)){
		cout <<"Black" <<endl;
	}
	else if(a-1<n-a &&b-1<=n-b)
		cout << "White";
	else if(a-1==n-a){
		if(b-1<n-b){
			cout << "White" <<endl;
		}
	}
	else if(n-a<a-1&& n-b<=b-1){
		cout <<"Black";
	}
	

}