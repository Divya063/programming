#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

 ll findGCD(ll a, ll b)
{
    if(a == 0) return b;
    findGCD(b % a, a);
}


ll countb(ll x, ll c, ll d){
	//numbers div by c (or d) in range x
	ll numa = x/c;
	ll numb = x/d;
	ll lcm= (c*d)/__gcd(c, d);
	ll both = x/lcm;
	return (numa+numb)-both;	
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll a,b, c,d;
cin >> a >> b >> c >>d;
// range between a and b (inclusive)
/*
example 4, 9, 2, 3
so 9-4 is 5 but 4 will not be included so add 1
*/
ll ans = b-a+1;
ll ans1 = ans - (countb(b, c, d)- countb(a-1, c, d));
cout << abs(ans1);
return 0;
}

