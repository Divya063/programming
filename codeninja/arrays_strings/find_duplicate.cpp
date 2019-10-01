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
cin >> n;
int arr[n];
for(int i=0; i<n; i++){
	cin >> arr[i];
}
unordered_set<int> map1;

for(int i=0; i<n ;i++){
	if(map1.insert(arr[i]).second == false){
		cout << arr[i] << endl;
		return 0;
	}
}

return 0;
}

