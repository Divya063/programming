#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

vector<int> adjList[N]{};

int n, m;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
cin >> n >> m;
for(int i=0;i<m;i++){

	int a, b;
	cin >> a >> b;
	adjList[a].push_back(b);
	adjList[b].push_back(a);
}
int one=0, two=0, star=0;
for(auto i: adjList){
	if(i.size()==2)
		two++;
	else if(i.size()==1)
		one++;
	else if(i.size()==n-1)
		star++;
}

if(two==n && one ==0 && star==0)
	cout << "ring topology";
else if(one==2 && two==n-2)
	cout << "bus topology";
else if(star==1 && one==n-1)
	cout << "star topology";
else
	cout << "unknown topology";
return 0;
}

