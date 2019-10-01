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
ll a;
string s;
cin >> a >> s;
if(a>=3200){
	cout << s << endl;
}
else if(a<3200){
	cout << "red" << endl;
}
return 0;
}

