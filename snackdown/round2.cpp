#include<bits/stdc++.h>

using namespace std;


int main(){

	std::ios::sync_with_stdio(false);
    cin.tie(NULL);

	long long t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];

		}
		int flag=0;

		for(int i=1;i<n;i++){
			if(__gcd(arr[i], arr[i-1])!=1){


				for(int j=1; j<=50;j++){

					if(arr[i]-j>=2 || arr[i]+j<=50){

						if(n==2){

					if(__gcd(arr[i-1], arr[i]-j)==1 && (arr[i]-j)>=2){

						flag++;
						arr[i]= arr[i]-j;
						break;
					}

					else if(__gcd(arr[i-1], arr[i]+j)==1 && (arr[i]+j)<=50){

						flag++;
						arr[i]= arr[i]+j;
						break;

					}

				}

				else if(n>2){

					if((__gcd(arr[i-1], arr[i]-j)==1 && __gcd(arr[i+1], arr[i]-j)==1 && i!=n-1 && (arr[i]-j)>=2 )||(__gcd(arr[i-1], arr[i]-j)==1 && i==n-1 && (arr[i]-j)>=2 )){

						flag++;
						arr[i]= arr[i]-j;
						break;
					}

					else if((__gcd(arr[i-1], arr[i]+j)==1 && __gcd(arr[i+1], arr[i]+j)==1 && i!=n-1 && (arr[i]+j)<=50 )||(__gcd(arr[i-1], arr[i]+j)==1 && i==n-1 && (arr[i]+j)<=50) ){

						flag++;
						arr[i]= arr[i]+j;
						break;

					}


				}
				}

		}

	}


	}
cout << flag <<endl;
for(int i=0;i<n ;i++){

	cout << arr[i] << " ";
}
if(t!=0)
cout << endl;

}
}