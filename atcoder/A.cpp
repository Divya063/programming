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
for(int i=0; i<n.length()-1; i++){
	if(n[i]==n[i+1]){
		cout << "Bad";
		return 0;
	}
}
cout << "Good";
return 0;
}
