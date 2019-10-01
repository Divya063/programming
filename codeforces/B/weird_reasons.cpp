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
string a;
int b;
cin >> a >> b;
ll count=0;
int i;
for(i = a.length()-1; i>=0&&b; i--){

	//cout << a[i] << endl;

	if(a[i]!='0'){
		count++;
	}
	else
		b--;
}

if(i<0){

		cout << a.length()-1;
}

else
cout << count <<endl;

return 0;

}


