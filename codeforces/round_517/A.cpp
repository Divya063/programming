#include<bits/stdc++.h>

using namespace std;


int main(){

	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long  n;
    cin >> n;
    int arr[n], arr1[n];
    for(int i=0;i<n-1;i++){

    	cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){

    	cin >> arr1[i];
    }

vector<int> ans;
for(int i=0;i<=3;i++){

		for(int j=0;j<=3;j++){

		int k=0;

		if(i|j ==arr[k] && i&j==arr1[k]){
			ans.push_back(i);
			ans.push_back(j);
			max=j;
			k=k+1
			break;

		}
	}

	break;
	
}

for(int i= max;i<)
	


}