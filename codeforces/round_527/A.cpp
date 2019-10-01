#include<bits/stdc++.h>

using namespace std;


int main(){

	long long t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		string str="";
		char arr[k];
		for(char i=0;i<k;i++){

			arr[i]= 'a'+i;
		}
		int j=0;
		for(int i=0;i<n;i++){
			str=str+arr[j];
			j=j+1;
			if(j==k)
				j=0;
		}
		cout << str <<endl;


	}


	


}