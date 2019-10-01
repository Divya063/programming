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
map<char, char> map1;
string s, s1;
cin >> s;
cin>> s1;
string str;
cin >> str;
for(int i=0;i<26;i++){
	map1[s[i]]=s1[i];
}
int n= str.length();
for(int i=0;i<n;i++){
	if(isalpha(str[i])){
	if(isupper(str[i])){
		str[i]^=(1<<5);
		//cout << str[i] << endl;
		char c= map1[str[i]];
		c^=(1<<5);
		cout << c;
	}
	else
		cout << map1[str[i]];
}
else cout << str[i];
}
return 0;
}

