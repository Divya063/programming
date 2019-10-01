#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool count_distinct(string str){
	unordered_set<char> map;
	ll n = str.length();
	for(int i=0;i<n;i++){
		map.insert(str[i]);
	}
	if(map.size()==0||map.size()==1){
		return true;
	}
	else
		return false;

}


int main(){
	
	ll a;
	cin>>a;
	string s;
	cin >> s;
	unordered_set<string> map1;
	ll n=s.length();
	ll count=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++){
			string s1= s.substr(i, j);
			//cout << s1 <<endl;
			string s2 = s.substr(0, i-i)+s.substr(j+i+1, n);
			if(count_distinct(s2)){
				cout << s2 <<endl;
				map1.insert(s1);
			}
		}
	}
	cout << map1.size();

}