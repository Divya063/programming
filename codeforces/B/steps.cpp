#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

bool comp(pair<int, float> p1, pair<int, float> p2){
	return p1.second>p2.second;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n ;
float k, t1, t2;
cin >> n >> t1 >> t2 >> k;
vector<pair<int, float>> map1;
int arr[3];
for(int i=1;i<=n;i++){
	float a, b;
	cin >> a >>b;
	float final = max(a*t1-((k/100)*a*t1)+(b*t2), b*t1-((k/100)*b*t1)+(a*t2));
	map1.push_back({i, final});
}
sort(map1.begin(), map1.end(), comp);
for(auto i : map1){
	printf("%d %.2f\n", i.first, i.second);
	//cout << i.first <<" "<< setprecision(2)<< fixed << i.second << endl;
}
return 0;
}

