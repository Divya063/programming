#include<bits/stdc++.h>

using namespace std;


int main(){
string s, c;
while(getline(cin , s)){

	for(int i=0;i<s.length();i++){

		if(s[i]=='/' && s[i+1]=='/'){
			c+="//";
			continue;
		}

		else{
			if(s[i]=='-' && s[i+1]=='>'){
				c[i]+='.';
			}
		}
		c+=s[i];
	}
	cout << s <<endl;
}

}