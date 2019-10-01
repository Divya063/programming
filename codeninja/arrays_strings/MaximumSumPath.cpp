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
int n, n1;
cin >> n >> n1;
int arr[n], arr1[n1];
for(int i=0; i<n ; i++){
	cin >> arr[i];
}

for(int i=0; i<n1; i++){
	cin >> arr1[i];
}

int l =0, r=0;
ll sum=0, sum1 =0;
ll result =0;
while(l<n && r<n1){
	if(arr[l]<arr1[r]){
		sum+=arr[l++];
	}
	else if(arr[l]>arr1[r]){
		sum1+=arr1[r++];
	}

	else{
		result = max(sum, sum1);
		sum =0; 
		sum1=0;
		while(l<n && r<n1 && arr[l]==arr[r]){
			result+=arr1[l++];
			r++;
		}
	}

}
while(l<n){
	sum+=arr[l++];
}
while(r<n1){
	sum1+=arr1[r++];
}
result = max(sum, sum1);
cout << result;
return 0;
}

