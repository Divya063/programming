#include<bits/stdc++.h>

using namespace std;


int main(){

	string s="0111000100010";
	int n= s.size();
	int arr[n];

	for(int i=0;i<s.size();i++){

		if(s[i]=='0'){
			arr[i]=1;
		}
		else
			arr[i]=-1;

	}

	vector<int> ans;

	int currentsum=0,sumtillhere= INT_MIN, start=0, end=0, q=0;
	for(int i=0;i<n;i++){

		currentsum= currentsum+arr[i];
		if(sumtillhere<currentsum){

			sumtillhere=currentsum;
			start=q;
			end=i;
		}

		if(currentsum<0){
			currentsum=0;
			q=q+1;
		}


	}

	cout << start << " "<< end << " "<< sumtillhere;



}