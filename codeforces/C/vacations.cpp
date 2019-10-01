#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

int n;
cin >> n ;
int arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}
int count =0;
for(int i=0;i<n;i++){
	if(arr[i]==0)
		count++;
	else if(i>0 && (arr[i]==1 || arr[i]==2)){
		if(arr[i]==arr[i-1]){
			arr[i] =0;
			count++;
		}
	}
	else if(i>0 && arr[i-1]<3 && arr[i-1]!=0){
		arr[i] = (arr[i-1]==1)?2:1;
	}
}
cout << count;
return 0;
}

