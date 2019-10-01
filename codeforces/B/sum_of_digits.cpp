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
string n;
cin >> n;
ll sum=0, count=0;
for(auto &it:n)
num+=it
if(n>=0 && n <=9){
	cout << n;
}

else{
	while(!(n>0 && n<=9)){
		while(n){
		ll rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	count++;
	n=sum;
	sum=0;
	}
	cout << count;
}

return 0;
}

