#include<bits/stdc++.h>

using namespace std;


int main(){
	
long long c, k;

cin >> c >> k;

long long arr[c+1];

for(int i=1;i<=c;i++){

	cin >> arr[i];

}
int j = 1;
int count=0;

if(k>1){

	if(arr[k]==1){
		count++;
	}

	for(int i=k-1;i>=1;i--){
		if(arr[i]==arr[k+j]){
			count++;
		}
		j=j+1;
	}

	for(int i= j+1; i<=c;i++){

		if(arr[i]==1){
			count++;
		}
	}
}


cout << count << " " << j<<endl;

}