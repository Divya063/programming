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

ll n , m;
cin >> n >> m;
map<string, string> str;
for(int i=0;i<m;i++){
	string a, b;
	cin >> a >> b;
	if(b.length()<a.length())
		str[a]=b;
	else
		str[a]=a;
}

for(int i=0;i<n;i++){
	string a1;
	cin >> a1;
	cout << str[a1] << " ";
}

return 0;
}

