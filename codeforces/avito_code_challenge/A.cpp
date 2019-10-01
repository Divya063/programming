#include<bits/stdc++.h>

using namespace std;


int main(){
	long long n;
	cin >> n;
	long long num =n;
	if(n==1)
		cout << 1;
	else{
	for(long long i=n-1;i>1;i--){

		if(n%i!=0 and num-i>0){
			num=num-i;
			if(num==0 or num<i or num==1)
				break;
		}
	}
	cout << num;
}

}