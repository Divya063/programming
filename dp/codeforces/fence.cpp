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

int n, k;
cin >> n >> k;
int arr[n];
for(int i=0;i<n;i++){

	cin >> arr[i];
}

int sum=0;

for(int i=0;i<k;i++){
	sum+=arr[i];
}

int best = sum;

int index=1;


for(int i=k;i<n;i++){

	sum += arr[i];
	sum-=arr[i-k];

	if(sum<best){
		best=sum;
		index=i-k+2;
	}
}
cout << index;
return 0;
}

