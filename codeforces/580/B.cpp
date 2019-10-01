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
ll count =0;
ll count1 =0;
for(int i =0; i<n; i++){
	cin >> arr[i];
	if(arr[i]==0)
		count1++;
}


	for(int i =0; i<n; i++){
		if(arr[i]!=0){
			if(arr[i]!=abs(arr[i])){
				count+=(-1-arr[i]);
				arr[i] = -1;
			}
			else {
				if(arr[i]!=1){
				count+=(arr[i]-1);
				arr[i] =1;

			}
			}
		}

	}
	

ll neg =0;
for(int i =0; i<n; i++){
	if(arr[i]==-1){
		neg++;
	}
}
if(neg%2==0)
cout << count+count1 << endl;
else{
if(count1>0){
	count+=1;
	count1--;
}
else
	count+=2;
cout << count+count1 << endl;
}

return 0;
}

