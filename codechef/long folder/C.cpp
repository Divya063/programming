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
ll t;
cin >> t;
while(t--){
	string str;
	cin >> str;
	ll size = str.length();
	ll arr[size];
	ll count =0;
	for(int i =0; i<size; i++){
		arr[i] = str[i]-'0';
		if(arr[i]==1){
			count++;
		}
	}

	if(count == 1){
		cout << "WIN" << endl;
	}

	else if(count%2==0){
		cout << "LOSE" << endl;
	}
	else if(count%2==1){
		cout << "WIN" << endl;
	}

}

return 0;
}

