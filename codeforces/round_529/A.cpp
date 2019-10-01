#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){

	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll p=1;
	for(ll i=0;i<=n;i=i+p){
		cout << s[i];
		p++;
	}
	

}