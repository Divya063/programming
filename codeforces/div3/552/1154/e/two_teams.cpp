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

ll n, k;
cin >> n >> k;
vector<int> a;
for(int i=0;i<n;i++){
	int b;
	cin >> b;
	a.push_back(b);
}
vector<pair<int, int>> map1;
int i;
while(!a.empty()){
	i = (max_element(a.begin(), a.end())-a.begin());
	int left_element = i-0;
	int right_element = a.size()-1-i;
	int index = max(k, left_element);
	for(int k=i; i>=index; i--){
		map1.push_back({a[i], 1});
		a.erase(a.begin()+)
	}

}
return 0;
}

