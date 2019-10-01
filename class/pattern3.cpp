#include<bits/stdc++.h>

using namespace std;




int main(){
	int n;
	cin >> n;
	int k=1;
	for(int i=n;i>=1;i--){

		for(int j=1;j<=i;j++){
			if(i%2==0){

				if(j%2!=0)
					cout << 1;
				else
					cout << 0;
			}
			else if(i%2!=0){
				if(j%2!=0)
					cout << 0;
				else
					cout << 1;
			}

		}
		cout << endl;
	}


}