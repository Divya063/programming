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
ll n, k;
cin >> n >> k;
string str;
cin >> str;
queue<string> q;
set<string> s;
q.push(str);
s.insert(str);
ll cost =0;
while(!q.empty() && s.size()<k){
	string top = q.front();
	q.pop();
	string nb = top;
	for(int i=0; i<nb.length(); i++){
		string str1 = nb;
		str1.erase(i, 1);
		if(!s.count(str1) && s.size()+1<=k){
			s.insert(str1);
			q.push(str1);
			cost+= n - str1.size();
		}
	}

}

if(s.size()<k){
	cout << -1;
}

else{
	cout << cost;
}
return 0;
}

