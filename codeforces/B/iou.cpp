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
map<int, int> map1;
int a, b;
cin >> a >> b;
int sum = 0;
for(int i=0; i<b; i++){
	int m, n, money;
	cin >> m >> n >> money;
		map1[n]+= money;
		map1[m]= map1[m]-money;
}


for(auto i : map1){
	//cout << i.first << " " <<i.second << endl;
	if(i.second<0)
		i.second=0;
	sum+=i.second;
}

cout << sum;
return 0;
}

