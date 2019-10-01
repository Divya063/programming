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
string name;
getline(cin, name);
//cout << name.length() << endl;
int s;
//s=name.find(' ');
for(int i=0;i<name.length();i++){

	if(name[i]==' ')
	s =i;
}
//cout << s;
string s1= name.substr(s+1);
string s3=name[0]+s1;
s3.insert(1, ".");
cout << s3;
//cout << s1;

return 0;
}

