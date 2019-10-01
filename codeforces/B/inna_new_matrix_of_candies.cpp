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
ll n , m;
cin >> n >> m;
string arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}

unordered_set<int> map1;
int flag =0;

for(int i=0;i<n;i++){
	int g = arr[i].find('G');
	int s = arr[i].find('S');
	//cout << g << " " << s << endl;
	if(g<s){
		map1.insert(s-g);
	}
	else{
		flag =1;
		break;
	}

}

if(map1.size()>0 && flag ==0){
	cout << map1.size();
}
else
cout << "-1";

return 0;
}

