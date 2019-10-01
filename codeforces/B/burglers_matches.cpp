#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

bool comparator(pair<int, int>& a, pair<int, int>& b){
	return (a.second>b.second);
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, m;
cin >> n >> m;
vector<pair<int,int>> map;
for(int i=0;i<m;i++){
	int a, b;
	cin >> a >> b;
	map.push_back(make_pair(a, b));

}

sort(map.begin(), map.end(), comparator);
ll sum=0, ans=0;

int k=1;

for(int i=0;i<m;i++){
	
	int q= min(map[i].first, n);
	n=n-q;
	ans+=(q*map[i].second);

}

cout << ans << endl;


return 0;
}

