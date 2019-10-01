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
	ll str, inte, exp;
	cin >> str >> inte >> exp;
	ll count =0;
	ll flag =0;
	if(exp==0 && str >inte){
		count++;
		cout << count << endl;
		flag = 1;
		continue;
	}

	if(str+exp==inte){
		cout << 0 << endl;
		continue;
	}

	ll sum = str+exp;
	count+=(sum-str);
	if(exp+inte>str)
		count--;
	cout << count << endl;

}


return 0;
}

