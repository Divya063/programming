#include<bits/stdc++.h>

using namespace std;


int main(){
	
	long long n;
	cin >> n;
	long long arr[n];
	for(long long i=0;i<n;i++){
		cin >> arr[i];

	}
	long long num1 =arr[0];
	int flag =0, flag1=0;
	long long d = abs(arr[1]-arr[0]);
	for(long long i=0;i<n-1;i++){
		if(arr[i+1]-arr[i]==d){
			flag=1;	
	}
	else{
			flag=0;
			break;
		}
	
	}
	long long int ans[n];
	for(long long i=0;i<n;i++){
		ans[i]=1;
	}
	long long num=2;
	if(flag==1 && n!=2 && (count(arr, arr+n, arr[0])!=n))
		cout << "Impossible";
	else{
		cout << "Possible" <<endl;
		if(count(arr, arr+n, 0)==n){
			for(int i=0;i<n;i++){
				cout << ans[i] << " ";

			}
			return 0;
		}
		else{
			int k;
			int j;
			for(int i=0;i<n;i++){
				k=0;
				j=i+1;
			while(k!=arr[i]-1){

				if(ans[j]==1){
				ans[j]=num;
				j++;
				}
				k++;
			}
			if(num<n)
			num=num+1;
		}
			
		}

		for(int i=0;i<n;i++){
			cout << ans[i] << " ";
		}
	}

}