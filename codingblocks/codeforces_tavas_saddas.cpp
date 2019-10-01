#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
	
	char a[20];
	cin >> a;

	int n= strlen(a);
	/*for(int i=0;i<n;i++){

		cout << a[i];
	}*/

	ll ans= (1<<n)-2;

	for(int i=n-1, pos=0;i>=0;i--, pos++){

		if(a[i]=='7'){

			ans+= (1<<pos);
		}
	}

	cout << ans+1;


}