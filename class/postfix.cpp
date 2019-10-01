#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int applyOp(int a, int b, char op){

	switch(op){
		case '+': return a+b;
		case '-': return a-b;
		case '/': return a/b;
		case  '*': return a*b;

		}
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

string s;
cin >> s;
stack<int> s1;
int n = s.length();
int val;
for(int i=0;i<n;i++){
	if(s[i]!='+' &&s[i]!='-' && s[i]!='/' && s[i]!= '*'){
		s1.push(s[i]);
	}

	else
	{
		int num1= s1.top()-'0';
		//cout << num1 << endl;
		s1.pop();
		int num2= s1.top()-'0';
		//cout << num2 << endl;
		s1.pop();
		
		val = applyOp(num1, num2, s[i]);
		s1.push(val+'0');
	}
}

cout << val;

return 0;
}

