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
while(n--){
	ll num;
	cin >> num;
	ll arr[num*4];
	for(int j =0; j<num*4; j++){
		cin >> arr[j];
		//cout << arr[j] << endl;
	}
	ll size = num*4;
	ll flag =0;
	sort(arr, arr+size, greater<>());
	ll i =0;
	ll j = (num*2)-1;
	vector<ll> rect;
	for(int i =0; i<size; i++){
		if(arr[i] == arr[i+1])
			rect.push_back(arr[i]);
		else{
			flag =1;
			cout << "NO" << endl;
			break;
		}
		i++;
	}


	// for(auto j : rect){
	// 	cout << j << endl;
	// }
	if(flag==0){
	int area = rect[0]*rect[j];
	//cout << area << endl;
	i++;
	j--;
	while(i<j){
		if(rect[i]*rect[j]!=area){
			flag =1;
			cout << "NO" << endl;
			break;
		}
		i++;
		j--;
	}
	if(flag==0)
		cout << "YES" << endl;
}
	
}
return 0;
}

