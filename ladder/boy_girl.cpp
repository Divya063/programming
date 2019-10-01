#include<bits/stdc++.h>

using namespace std;


int main(){

	unordered_set<char> map;
	string s;
	cin >> s;
	int count=0;
	for(int i=0;i<s.length();i++){

		if(map.insert(s[i]).second){
			count++;
		}
	}

	if(count%2!=0){
		cout << "IGNORE HIM!" <<endl;
	}
	else{
		cout << "CHAT WITH HER!" <<endl;
	}
	


}