#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll w, h, t, temp1=0, temp2=0;
cin >> w >> h >> t;
ll x, y, a;
while(t--){

	
	cin >> x >> y >> a;
	if(a==1){
		temp1+=x;
	}
	else if (a==2){
		ll sub = w - x;
		temp1+=sub;

	}

	else if (a==3){

		temp2+=y;
	}
	else{
		ll sub = h-y;
		temp2+=sub;
	}
}
if(temp1>w || temp2 > h){
	cout << "0";
}
else
cout << w*h << endl;
return 0;
}

