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

ll arr[n], arr1[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}

if(is_sorted(arr, arr+n)){
	cout << "yes" << endl;
	cout << "1" << " " << "1" << endl;
	return 0;
}

int flag=0, start, end;
for(int i=1;i<n;i++){

	if(arr[i-1]>arr[i]){
		flag++;
		if(flag==1){
			start=i-1;
		}
		end=i;
	}
}

//cout << start << " " << end << endl;

reverse(arr+start, arr+end+1);

/*for(int i=0;i<n;i++){
	cout << arr[i];
}*/
if(is_sorted(arr, arr+n)){

	cout << "yes" << endl;
	cout << start+1 << " " << end+1 << endl;
}
else
cout << "no"<< endl;



return 0;
}

