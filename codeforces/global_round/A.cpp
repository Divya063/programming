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

ll a, n;
cin >> a >> n;
int arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}

ll sum=0;
ll k =n;

for(int i=0;i<k;i++){
	n--;
	sum+=arr[i]*pow(a, n);
	//cout << sum << endl;
}


if(sum%2==0)
cout << "even";
else{
cout << "odd"; 
}
return 0;
}

