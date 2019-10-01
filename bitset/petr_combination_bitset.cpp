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

ll n;
cin >> n;
ll arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}
for(int i=1;i<(1<<n);i++){

	int sum=0;

	for(int j=0;j<n;j++){

		if(i&(1<<j)){
			sum=sum+arr[j];
			
		}
		else{
			sum=sum-arr[j];
		}
	}

	sum=abs(sum);
	if(sum%360==0){
		cout << "YES";
		return 0;
	}
}
cout << "NO" << endl;
return 0;
}

