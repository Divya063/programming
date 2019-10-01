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

ll n, k;
cin >> n >> k;
int sum=k;
int ans=sum;
for(int i =0;i<n;i++){

	if(sum==0 &&i!=n-1){
		if(k<=(n-i)){
		sum=sum+(n-i);
		ans+=sum;
	}
	else{
		sum+=k-(n-i);
		ans+=sum;
	}
	}
	if(sum-1>=0)

	sum=sum-1;
	
}

cout << ans << endl;





return 0;
}

