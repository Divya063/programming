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

ll n, b;
cin >> n >> b;
ll arr[n];
for(int i=0; i<n;i++){

	cin >> arr[i];
}

vector<int> map;

int even=0, odd=0;

for(int i=0; i<n; i++){

	if(arr[i]%2==0)
		even++;
	else
		odd++;
	if(even==odd  && odd!=0 && i!=n-1){
		map.push_back(abs(arr[i]-arr[i+1]));
	}
}

int count=0, sum=0;
sort(map.begin(), map.end());

for(auto i : map){

	sum=sum+i;
	if(sum>b){
		break;
	}
	count++;
}
cout << count << endl;

return 0;
}

