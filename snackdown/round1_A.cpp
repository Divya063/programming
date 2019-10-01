#include<bits/stdc++.h>

using namespace std;


int main(){

	long long test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		float sum=0.2;
		for(int i=0;i<n;i++){
			string t;
			cin >> t;
			for(int j=1;j<t.length();j++){
				if(t[j]==t[j-1]){

					if((t[j]=='j' || t[j]=='k') && (t[j-1]=='j' || t[j-1]=='k')){
						sum=sum+0.2;
					}

					if((t[j]=='d' || t[j]=='f') && (t[j-1]=='d' || t[j-1]=='f')){
						sum=sum+0.2;
					}

				}

				if(t[j]!=t[j-1]){

					if((t[j]=='j' || t[j]=='k') && (t[j-1]=='k' || t[j-1]=='j')){
						sum=sum+0.4;
					}

					if((t[j]=='d' || t[j]=='f') && (t[j-1]=='f' || t[j-1]=='d')){
						sum=sum+0.4;
					}

					if((t[j]=='j' || t[j]=='k') && (t[j-1]=='d' || t[j-1]=='f')){
						sum=sum+0.2;
					}

					if((t[j]=='d' || t[j]=='f') && (t[j-1]=='j' || t[j-1]=='k')){
						sum=sum+0.2;
					}

				}
			}
		}

		cout << sum <<endl;
	}
	


}
