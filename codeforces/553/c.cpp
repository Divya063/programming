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
vector<int> vec;
vector<int> arr(200 * 1000 + 1);
for(ll i=0; i<n; i++){
	ll a;
	cin >> a;
	arr[a]++;
	vec.push_back(a);
	if(arr[vec[i]]>2){
			cout << "NO";
			return 0;
		}
}
sort(vec.begin(), vec.end());

cout << "YES" << endl << count(arr.begin(), arr.end(), 2) <<endl;
for(int i=0;i<vec.size();i++){
	if(arr[vec[i]]==2){
		cout << vec[i] << " ";
		arr[vec[i]]--;
	}
}
sort(vec.rbegin(), vec.rend());
cout << endl << count(arr.begin(), arr.end(), 1) << endl;
for(int i=0;i<vec.size();i++){
	if(arr[vec[i]]==1){
		cout << vec[i] << " ";
		arr[vec[i]]--;
	}
}
	


return 0;
}

