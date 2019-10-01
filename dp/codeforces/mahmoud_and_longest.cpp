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

double arr[]={19.1, 2.0, 3.1, 35.5};
sort(arr, arr+4, greater<>());
for(int i=0;i<4;i++){
	cout << arr[i] << endl;
}
return 0;
}

