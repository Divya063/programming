#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
int ans[3]={0};
cin >> n;
for(int i=0;i<3;i++){

	for(int j=0;j<n-i;j++){

		int num;

		cin >> num;

		ans[i]+=num;

	}
}

cout << ans[0]-ans[1] << endl;
cout << ans[1]-ans[2] << endl;

return 0;
}

