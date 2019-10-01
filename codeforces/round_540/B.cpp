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
ll even=0, odd=0, count=0;
int counter=0;
while(count!=n-1){
for(int i=0;i<n;i++){
	if(count!=i){

		if(i%2==0)
			even+=arr[i];
		else
			odd+=arr[i];

	}
}

count++;
if(even==odd)
	counter++;
even=0, odd=0;

}

cout << counter << endl;
return 0;
}

