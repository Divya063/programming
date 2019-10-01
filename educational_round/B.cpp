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

int n;
cin >> n;
string s;
cin >> s;
ll num=n-11;
if(num==0){
	cout << "NO";
	return 0;
}
if(n<11){
	cout << "NO";
}
else{
	ll count1 = count(s.begin(), s.end(), '8');
	ll want=num/2;
	//cout << count1 << " " << want;
	if(count1>want && s[0]=='8'){
		cout << "YES";
	}
	else
		cout << "NO";
}
return 0;
}

