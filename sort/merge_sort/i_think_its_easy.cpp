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
while(n--){
	string s, word;
	multimap<ll, string> map;
	getline(cin , s);
	//getline() reads till enter is encountered even if no characters are read. So even if there is nothing in the third line, getline() considers it as a single line.
	while(s.length()==0)
		getline(cin, s);
	stringstream ss(s);
	while(ss >> word){
		map.insert({word.length(), word});
	}
	int f = 0;
	for(auto w: map){
		if(f==0)
           {
               cout<<" ";
               f = 1;
           }
		cout << w.second << " ";
	}

	cout << endl;
}
return 0;
}

