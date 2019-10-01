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
ll n, a, b;
cin >> n >> b >>a;
ll arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}
ll i=0;
ll cap1=b;
ll cap2=a;
while(!(a==0 && b==0)){
	if(arr[i]==0 && i==0){

		a=a-1;
	}
	else if(arr[i]==1 && a < cap2){

		if(b>0){
			b=b-1;
			a=a+1;
		}
	}

	else{
		if(a>0)
			a=a-1;

		else
			b=b-1;
	}


	if(i<n){
		i++;
	}
	else break;

}

cout << i;
return 0;
}

