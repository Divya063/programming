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
string s ;
cin >> s;
int x=0;
if(n%2 || s[0]==')' || s[n-1] == '(' ){
	cout << ":(";
	return 0;
}
s[0]= '(';
s[n-1]=')';
for(int i=1; i<n-1; i++){
	if(s[i]=='(')
		x++;
}

int rem = (n/2-1);
rem-=x;
for(int i=1; i<n-1;i++){
	if(s[i]=='?'){
	if(rem){
		s[i]='(';
		rem--;
	}
	else {
		s[i]=')';
	}
}

}


int count=0;
for(int i=1; i<n-1;i++){
	if(s[i]=='(')
		count++;
	else{
		if(count<=0)
		{
			cout << ":(";
			return 0;
		}
		count--;
	}
}
if(count){
	cout << ":(";
}
else{
	cout << s;
}
return 0;
}

