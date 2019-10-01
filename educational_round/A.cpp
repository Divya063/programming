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
string s;
cin >> s;
string t =s;
sort(t.begin(), t.end());
if(t==s){
	cout << "NO";
}
else{
char s1= s[0];
char s2 = s[1];
int max_ind=0;
int max_ind1=0;
for(int i=1; i<n; i++){
	if(s1<s[i]){
		s1=s[i];
		max_ind=i;
	}
	if(i!=n-1){
		if(s[i-1]>s2){
			s2=s[i-1];
		}
	}
}
int ans;
cout << "YES" << endl;
if(max_ind==n-1){
	cout << max_ind1+1

}
if(max_ind==0){
	ans=1;
	cout << max_ind+1<< " " << ans+1;
}
else{
	cout << max_ind+1<< " " << max_ind+2;
}
}

return 0;
}

