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
set<int> idx;

for (int i = 0; i < 7; ++i) {
		idx.insert(i);
	}
	int pos = 6;
	 auto it = (idx.find(pos));
	 int k=2;
	 for (int i = 0; i < k; ++i) {
			if (it == idx.end()) break;
			cout << *it;
			++it;
		}

return 0;
}

