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

ll n, m, k;
cin >> n >> m >> k;
if(m-n>=0 && k-n>=0){
	cout << "Yes";
}
else{
	cout << "No";
}

return 0;
}

