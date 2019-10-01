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
vector<int> arr(3);
cin >> arr[0] >> arr[1]  >> arr[2];
int full = min({arr[0]/3, arr[1]/2, arr[2]/2 });
arr[0] -= 3*full;
arr[1] -= 2*full;
arr[2] -= 2*full;

vector<int> idx{0, 0, 1, 2, 0, 2, 1};

int day=0;
int count=0;
int ans=0;
for(int start=0; start<7; start++){
	day=start;
	vector<int> b =arr;
	count =0;
	while(b[idx[day]]>0){

		b[idx[day]]--;
		day = (day+1)%7;
		count++;

	}
	ans=max(ans, (full*7)+count);
}

cout << ans;

return 0;
}

