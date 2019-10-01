#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
	ll n;
	cin >> n;
	for(ll i=0;i<n;i++){
		ll a, b;
		int flag=0;
		cin >> a >> b;
		if(b%a==0){
			cout << a << " "<< b <<endl;
		}
		else{
			if(b-a>a){
				cout << a <<" " << a+a<<endl;
			}
		}
}
}