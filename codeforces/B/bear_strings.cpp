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
string s;
cin >> s;
int size = s.length();
int ans = 0;
for(int i = 0;i<size;i++){
	int f = s.find("bear", i);{
		if(f!=-1)
			ans+=(size-(f+3));
	}
}

cout << ans;
return 0;
}

