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

ll n, m;
cin >> n >> m;

ll max1 = n-(m-1);
ll ans = (max1*(max1-1))/2;
ll n1 = n/m;
ll left =n%m;
ll left1=m-(n%m);
ll ans1= left1*(n1*(n1-1))/2 + left*((n1+1)*(n1))/2; // adding 1 to the n%m elements
cout << ans1 << " " << ans;
return 0;

}

