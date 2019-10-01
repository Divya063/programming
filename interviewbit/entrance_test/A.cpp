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
int size = s.length();
int a;
cin >> a;

if(a>=26){
	a=a%26;
}

map<char, int> m;
for(int i=0;i<size;i++){
	m[s[i]]++;
}

for(int i=0;i<size;i++){
	if(m[s[i]]%2==0){
		if(s[i]=='z'){
			if(a>=1){
				int left = a-1;
				s[i]='a';
				if(left!=0)
					s[i]+=left;
				
			}
		}
		else
		{
			if(a>=1){
				if(s[i]+a>122){
				int val = 'z'-s[i];
				int left = a-val;
				if(left!=0){
				s[i]='a';
				s[i]+=(left-1);
			}

			}
			else
			s[i]+=a;
		}
		
	}
	}
	else{

		if(s[i]=='a'){
			if(a>=1){
				int left = a-1;
				s[i]='z';
				if(left!=0)
					s[i]-=left;
				
			}
		}
		else{
			if(a>=1){
				if(s[i]-a<97){
				int val = s[i]-'a';
				int left = a-val;
				if(left!=0){
				s[i]='z';
				s[i]-=(left-1);
			}

			}
		else
		s[i]-=a;
	}

	}
}
}
cout << s;
return 0;
}

