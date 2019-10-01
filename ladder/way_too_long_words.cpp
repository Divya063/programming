#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;
	for(int i=0;i<n;i++){

		string s1;
		cin >> s1;
		int n1=s1.length();
		string s= s1.substr(1, s1.length()-2);
		int size=s.length();
		if(n1>10){
			string newstring=s1[0]+to_string(size)+s1[n1-1];
			cout << newstring << endl;

		}
		else{

			cout << s1 <<endl;
		}
	}

}