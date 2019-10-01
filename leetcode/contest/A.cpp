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
int k;
cin >> k;
int n = 11;
string ch;
if(k==1)
	return 1;

while(n%k!=0){

	ch+='1';
	n = stoi(ch);
}
cout << n;
cout << ch.length();
}

