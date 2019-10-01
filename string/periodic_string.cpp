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
string blank; // reads the rest of the line that the number was on
getline(cin, blank); // reads the blank linesiz
string s;
cin >> s;
ll size = s.size();
ll pf[N]={0};
ll i=1;
ll len = 0;
pf[0] = 0;
while(i<size){
	if(s[i]==s[len]){
		len++;
		pf[i++]= len;

	}

	else{
		if(len==0){
			pf[i]=0;
			i = i+1;
		}
		else{
			len = pf[len-1];
		}
	}
}

if(size%(size-len-1)){
	cout << size << endl;
}

else{
	cout << size-len-1 << endl;
}
if(n){
	cout << " ";
}

}

return 0;
}

