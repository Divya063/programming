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

string s, s1;

cin >> s >> s1;
if(s==s1)
	cout << "-1";
else
	cout << max(s.size(), s1.size());
return 0;
}

