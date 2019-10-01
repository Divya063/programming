#include<bits/stdc++.h>

using namespace std;


string pattern[10] ={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

string s="";

void words(int n){

	if(n==0)
		return;

	words(n/10);

	cout << pattern[n%10]<< " ";

}


int main(){
	

words(3678);

}