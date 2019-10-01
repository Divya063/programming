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

ll n;
cin >> n;
string s;
cin >> s;
int count=0;
map<char, int> tab;
for(int i=0;i<s.length();i++){

	tab[s[i]]++;
}

for(auto i : tab){
	if(tab[i.first]>=2)
		count+=(tab[i.first]-1);

}
//cout << count << endl;
if(count>25|| count+(n-count)>26)
{
	cout << -1;
}
else
cout << count << endl;

return 0;
}

