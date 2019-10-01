#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N=1e5+5;
 
int n, totW;
int w[105], v[105];
int cache[105][N];
 
int dp(int idx, int val)
{
	if(val==0)
		return 0;
	if(val<0)
		return 1e15;
	if(idx==n+1)
		return 1e15;
	if(cache[idx][val]!=-1)
		return cache[idx][val];
	cache[idx][val] =min(dp(idx+1, val), w[idx]+dp(idx+1, val-v[idx]));

	return cache[idx][val];
}
 
int32_t main()
{
	IOS;
	memset(cache, -1, sizeof(cache));
	cin>>n>>totW;
	for(int i=1;i<=n;i++)
		cin>>w[i]>>v[i];
	int ans=0;
	for(int i=1;i<=1e5;i++)
	{
		int minWt=dp(1, i);
		if(minWt<=totW)
			ans=i;
	}
	cout<<ans;
	return 0;
}