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
int n , k;
cin >> n >> k;
int arr[n];
for(int i=0; i<n; i++){
	cin >> arr[i];
}

int sum=0;


for(int i=0; i<n ;i++){
   if(arr[i]<0 && k>0){
   		arr[i]*=-1;
   		k--;
   }
}

sort(arr, arr+n);

if(k%2){
	arr[0]*=-1;
}

for(int i=0; i<n;i++){
		sum+=arr[i];
}

cout << sum;

return 0;
}

