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
set<int> s1;
for(int i=0;i<n;i++){
	int a;
	cin >> a;
	s1.insert(a);
}
int size = s1.size();
if(size>3) {
	cout << "NO";
	return 0;
}
if(size<3){
	cout << "YES";
	return 0;
}
vector<int> v{s1.begin(), s1.end()};
if(v[1]-v[0]==v[2]-v[1]){
	cout << "YES";
	return 0;
}
else{
	cout << "NO";
	return 0;
}

}



