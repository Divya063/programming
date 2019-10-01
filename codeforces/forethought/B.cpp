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
int n = s.length();
int i;

int count1= count(s.begin(), s.end(), 'a');
int rem = n-count1;
if(rem==0){
	cout << s;
	return 0;
}
else if(s[n-1]=='a'){
	cout << ":(";
	return 0;
}

if(rem%2!=0){
	cout << ":(";
}
else{

	int m = rem/2+count1;

	string s3="";
	string ans="";
	for(i=0; i<m; i++){
		ans+=s[i];
		if(s[i]!='a'){
		s3+=s[i];
		}
	}

	string rem ="";
	
	for(; i<n; i++){
		rem+=s[i];
	}
	if(rem==s3){
		cout << ans;
	}
	else{
		cout << ":(";
	}

}
return 0;
}

