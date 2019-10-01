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
int p, q, l, r;

vector<pair<int, int>> time;
vector<pair<int, int>> time2;

cin >> p >> q >> l >> r;
for(int i=0;i<p;i++){
	int c, d;
	cin >> c >> d;
	time.push_back({c,d});
}
int count =0;
for(int i=0; i<q ; i++){
	int a, b;
	cin >> a >> b;
	time2.push_back({a,b});
}

	
cout << count;
return 0;
}

