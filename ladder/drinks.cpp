#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;
	float arr[n];
	float sum=0.0;
	for(int i=0;i<n;i++){

		cin>> arr[i];

	}

	for(int i=0;i<n;i++){
		sum=sum+(arr[i]/100);

	}
	cout << setprecision (12) << fixed <<(sum/n)*100;
	


}