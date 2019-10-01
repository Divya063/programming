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
int who =0;
vector<pair<int, int>> a(n);

for(int i=0;i<n; i++){
	cin >> a[i].first;
	a[i].second = i;
}

sort(a.rbegin(), a.rend());
queue<int> q;
for(int i=0; i<n;i++){
	q.push(a[i].second);
}
set<int> idx;
for(int i=0;i<n; i++){
	idx.insert(i);
}
string str(n, '0');
while(!idx.empty()){
	while(!idx.count(q.front())){
		q.pop();
	}

	int num=q.front();
	q.pop();
	auto it = idx.find(num);
	
	vector<int> ans;
	for(int i=0; i<=k ;i++){
		ans.push_back(*it);
		if(it==idx.begin())
			break;
		it--;
	}

	it = next(idx.find(num));
	for(int i=0; i<k;i++){
		//if max is the last element
		if(it==idx.end()){
			break;
		}
		ans.push_back(*it);
		it++;
	}

	for(auto i : ans){
		str[i] = '1'+who;
		idx.erase(i);
	}
	who^=1;

	}
	cout << str;
}

