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
	string s;
	cin>> s;
	int n=s.length();
	int flag=0;
	sort(s.begin(), s.end());
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1] || s[i]+1!=s[i+1]){
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout << "Yes" <<endl;
	else
		cout << "No" <<endl;

}
return 0;
}

