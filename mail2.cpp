#include<bits/stdc++.h>

using namespace std;


int main(){

	int n;
	cin >> n;
	int arr[n], t, max=-1;
	for(int i=1;i<=n;i++){
		scanf("%d", &t);
		if(t==max+1){
			max++;
		}
		else if(t>max+1){
			cout << i;
			return 0;
		}


	}
	cout << "-1";
	return 0;

	


}