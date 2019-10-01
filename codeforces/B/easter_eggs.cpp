#include<bits/stdc++.h>

using namespace std;


int main(){
	
	long long n;
	cin >> n;
	char a[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
	string str="";
	int k=0;
	for(int i=0;i<n;i++){
		if(k>6){
			k=3;
		}

		str=str+a[k];
		k=k+1;
	}
	cout << str;


}