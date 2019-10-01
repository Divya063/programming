#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
const int MAX = 2e5+2;
int size[MAX], n;


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll  k, q;
cin >> n >> k >> q;
unordered_map<ll, ll> map1;
size[0] = 0;
for(int i=1; i<=n; i++){
	size[i] = k;
}
for(int i=0; i<q; i++){
	ll a;
	cin >> a;
	map1[a]++;

}
for(int i=1; i<=n; i++){
	//cout << size[i] << endl;
	size[i] = size[i]-(q-map1[i]);
	if(size[i]>0){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
}
return 0;
}

