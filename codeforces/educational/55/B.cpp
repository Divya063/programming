#include<bits/stdc++.h>

using namespace std;


int main(){
	
int n;
cin >> n;
string s;
cin >> s;
int arr[n];
int flag=0, flag1=0;
int firstindex, lastgindex;
for(int i=0;i<n;i++){

		if(s[i]=='S'){

			arr[i]=-1;
			if(flag==0){
			firstindex=i;
			}
			flag=1;
		}
		else{

			arr[i]=1;
		lastgindex=i;
		flag1=0;
			
		}
	}
	if(flag1==0){
	if(lastgindex>firstindex){
		arr[firstindex]=1;
		arr[lastgindex]=-1;
	}
}

	int sumtillhere=INT_MIN, currentsum=0; 
	int start=0;
	for(int i=0;i<n;i++){
	
	currentsum=currentsum+ arr[i];
	if(sumtillhere<currentsum){
		sumtillhere=currentsum;
	}
	if(currentsum<0){
		currentsum=0;
	}
	
}

cout << sumtillhere;

}