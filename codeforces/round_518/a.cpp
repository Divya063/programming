#include<bits/stdc++.h>

using namespace std;


int main(){

	int n, m, k, l;
	cin >> n >> m >> k >> l;

	if(m>n){

		cout << "-1" <<endl;

	}

	else{

		if(n-k<m){

			cout<< "-1" <<endl;
	
}
		else if(n-k>=m && m>l){

			cout << "1" <<endl;
		}

		else if(n-k>m && l>m){

			if(l%m!=0){
				cout << "-1";
			}
			else{

				cout << l/m <<endl;
			}


		}




	}


	


}