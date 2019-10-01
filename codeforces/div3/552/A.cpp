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
int arr[4];
for(int i=0;i<4;i++){
	cin >> arr[i];
}
sort(arr, arr+4, greater<>());
int ans1 = arr[0]-arr[1];
int ans2 = arr[2]-ans1;
int ans3 = arr[0]-(ans1+ans2);
cout << ans1 << " "<< ans2<< " " << ans3;
return 0;
}

