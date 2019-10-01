#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll t;
cin >> t;
while(t--){
vector<pair<int, int>> map;

for(int i=0;i<5;i++){
	int m ,n;
	cin >> m >> n;
	map.push_back(make_pair(m,n));
}

int count=0;
sort(map.begin(), map.end(), greater<>());

int row= map[0].first;
int column = map[0].second;

if(row==column)
	count++;
int colind= map[4].second;
int column1=0;
int row1=0;

cout << colind << endl;

for(auto i: map){
	if(colind==i.second)
		column1++;
	if(i.first==row)
		row1++;
}
//cout << column1 << " " << row1;

if(column1==3 && row1==3 && count==1)
	cout << "YES" << endl;
else
	cout << "NO" << endl;
}
return 0;
}

