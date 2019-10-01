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
int n, m, k, t;
cin >> n >> m >> k >> t;

string arr1[3]={"Carrots", "Kiwis", "Grapes"};

int arr[1001];

for(int i=0;i<k;i++){

	int a, b;
	cin >> a >> b;
	arr[i]=(a-1)*m+(b-1);
	
}

sort(arr, arr+k);

for(int i=0;i<t;i++){

	int p, q;
	cin >> p >> q;
	int temp=(p-1)*m+(q-1);
	auto it=lower_bound(arr, arr+k, temp);
	if(*it==temp){
		cout << "Waste" <<endl;
		continue;
	}
	cout << arr1[(temp-(it-arr))%3] << endl;
	}

return 0;
}

