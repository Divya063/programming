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
int sum;
int n =s.length();
for(int i=0;i<n;i++){
	if(s[i]=='+')
		sum+=1;
	else
		sum-=1;
}



return 0;
}

