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
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

ll n, x, k;
cin >> n >> x >> k;
ll hole[1000005]={0};

for(int i=0;i<x;i++){
	int a;
	cin >> a;
	hole[a]=1;
}

int pos=1;
for(int i=0;i<k;i++){

	int p, q;
	cin >> p >> q;
	if(p==pos &&!hole[p])
		pos=q;
	else if(q==pos && !hole[q])
		pos=p;
}

cout << pos << endl;



return 0;
}

