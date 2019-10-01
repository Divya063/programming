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


int count1=0;
map<int, int> tab;
for(int i=0;i<n;i++){
	if(arr[i]>n)
		count1++;
	else
	tab[arr[i]]++;
}

for(auto i : tab){
	if(i.first<=n){
	if(tab[i.first]>=2)
		count1+=(tab[i.first]-1);
}


}
	cout << count1 << endl;

return 0;
}

