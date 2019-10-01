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
cin >> s;
ll flag = 0;
for(int i=0; i<s.length(); i++){
	if((i+1)%2){
		if(s[i]=='R' || s[i] == 'U' || s[i] == 'D'){
			continue;
		}
		else{
			flag = 1;
			break;
		}
	}

	else{
		if(s[i] == 'L' || s[i] == 'U' || s[i] == 'D'){
			continue;
		}
		else{
			flag =1 ;
			break;
		}
	}
}
if(flag == 0){
	cout << "Yes" << endl;
}
else
	cout << "No" << endl;
return 0;
}

