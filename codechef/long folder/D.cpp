#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

ll pref[N];
void update(ll a, ll b, ll v, ll length){
	if(a<0)
		a=0;
	if(b>length-1)
		b = length-1;
	pref[a]+=v;
	if(b!=length-1){
		pref[b+1]-=v;
	}
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin >> n;
while(n--){
	ll length;
	cin >> length;
	ll rad[length+1], health[length+1];
	memset(pref, 0, sizeof(pref));
	for(int i =1; i<=length; i++){
		cin >> rad[i];
	}
	for(int i =0; i<length; i++){
		cin >> health[i];
	}

	for(int i =1; i<=length; i++){
		ll a = i-rad[i];
		ll b = i+rad[i];

		update(a-1, b-1, 1, length);
	}

	for(int i =1; i<length; i++){
		pref[i]+=pref[i-1];
	}
	ll flag =0;
	sort(pref, pref+length);
	sort(health, health+length);
	for (int i = 0; i < length; i++) 
        if (pref[i] != health[i]) 
            {
            	cout << "NO" << endl;
            	flag = 1;
            	break;
            }

     if(flag == 0){
     	cout << "YES" << endl;
     }

}
return 0;
}

