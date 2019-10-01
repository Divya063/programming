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
stack<char> s1;
int count=0;
int n = s.length();
for(int i=0;i<n;i++){
	if(s[i]=='('){
		s1.push(s[i]);
	}
	else if(s[i]==')' && !s1.empty()){
		if(s1.top()=='('){
			count+=2;
			s1.pop();
		}
	}
}
cout << count << endl;
return 0;
}

