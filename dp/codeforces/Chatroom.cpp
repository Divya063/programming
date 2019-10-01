#include<bits/stdc++.h>

using namespace std;

int main(){

	char s[5]={'h', 'e', 'l', 'l', 'o'};
	string s1;
	cin >> s1;
	int i=0;
	for(int j=0;j<s1.length();j++){
		if(s1[j]==s[i]){
			i=i+1;
		}

		if(i==5){
			cout << "YES";
			break;
		}
	}

	if(i!=5){
		cout << "NO";
	}

}



