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
for(int i=0;i<n;i++){
	cin >> arr[i];
}

int best=INT_MIN;
int end;

for(int i=0;i<n;i++){
	int avg;
	for(int j=i;j<n;j++){
		avg+=arr[j]
		end=j
	}
	if(i!=0){
	best=max(avg, avg/end)
}	

}

return 0;
}

