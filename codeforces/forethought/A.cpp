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
cin>> s;
ll count1= count(s.begin(), s.end(), 'a');
ll n=s.length();
ll size = n;
n/=2;
if(count1>n){
	cout << size;
}
else{
	cout << (2*count1)-1;
}
return 0;
}

