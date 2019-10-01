#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 
int main(){

std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    //cout << "prime" << isPrime(35);


	long long t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
			

		}
		int flag;
		int flag1;
		int count=0;

		for(int i=0;i<n;i++){
			if(isPrime(arr[i])){
				count++;
				for(int j=i+1; j<n; j++){
					if(arr[j]%arr[i]==0){

						arr[i]=47;
						flag=1;
						break;
					}
				}

				if(flag==1){
					break;
				}
				
			
			}

			if(count==n){
				flag=2;
			}

				if(i != n-1){
			if(__gcd(arr[i], arr[i+1])!=1){

				flag1=1;
				arr[i]=47;
				break;
			}

		}
		

		}

		if(flag1==1){

			cout << "1" <<endl;
			for(int i=0;i<n;i++){
			cout << arr[i] <<" ";		

		}
	}

		if(flag!=1 && flag1!=1 &&flag!=2){
			cout << "0" <<endl;
			for(int i=0;i<n;i++){
			cout << arr[i] << " ";	


		}

		}

		if(flag==2){

			cout << "0" <<endl;
			for(int i=0;i<n;i++){
			cout << arr[i] << " ";	

		}
	}

		/**if(flag1==0 &&flag==0){

			cout << "0" <<endl;
			for(int i=0;i<n;i++){
			cout << arr[i] << " ";	

		}
	}**/

		/**if(flag==0){
			cout << "0" <<endl;
			for(int i=0;i<n;i++){
			cout << arr[i] << " ";		

		}
	}**/

		if(flag==1){
			cout << "1" <<endl;
			for(int i=0;i<n;i++){
			cout << arr[i] <<" ";		

		}

		}
		if(t!=0)
			cout <<endl;
	}
}