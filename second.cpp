#include<bits/stdc++.h>

using namespace std;


int main(){

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		bool memo[n];
		int memopad[n];
		unordered_set<int> map;

		fill(memo, memo+n+1, true);
		fill(memopad, memopad+n+1, -1);
		



		for(int i=2; i*i<=n;i++ ){

			if(memo[i]){

				for(int p=2*i; p<=n;p=p+i){

					memo[p]=false;
				}
			}
		}

		memo[2]=true;

		int j;
		int k=0;

		for(int i=2;i<=n;i++){

			for(j=i+1;j<n;j++){

			if(memo[i] && memo[j]){
				if(i*j>n)
					break;

				memopad[k]= i*j;
				map.insert(i*j);
				k++;
				
			}
			}

		}


		int count=0;
		for(int i=0;i<=n;i++){

			if(memopad[i]==-1){
				break;
			}

			if(map.find(n-memopad[i])!=map.end()){

				cout << "YES" <<endl;
				count=1;
				break;
			}


			//cout << memopad[i] << " ";
		}

		if(count==0){

			cout << "NO" <<endl;

		}
	}
	


}