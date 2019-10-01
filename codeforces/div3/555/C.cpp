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
deque <int> list;
for(ll i=0; i<n ; i++){
	ll a;
	cin >> a;
	list.push_back(a);
}

stack<int> map1;
string str="";

for(int i=0; i<n; i++){
	if(i==0){
		if(list.front()<=list.back())
		{
		map1.push(list.front());
		str+="L";
		list.pop_front();
	}
	else{
		map1.push(list.back());
		str+="R";
		list.pop_back();
	}
}
else if(list.front()>map1.top()){
	if(list.front()<=list.back()){
		map1.push(list.front());
		str+="L";
		
	}

}
else if(list.back()>map1.top()){
	if(list.back()<)
}

}

return 0;
}

