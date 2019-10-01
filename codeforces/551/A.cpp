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
int n, t;
cin >> n >> t;
int ans1=0;
int ans =INT_MAX;
for(int i=0;i<n;i++){
	int s, d;
	cin >> s >> d;
	int num = s;
	while(num<t){
		num+=d;
	}
	if(num<t)
		num+=d;
	if(ans>num){
		ans=num;
		ans1=i+1;
	}
}

cout << ans1;

return 0;
}

