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
ll n , m;
cin >> n >> m;

ll arr[n];

for(int i=0;i<n;i++){

	cin >> arr[i];
}

int k = 0, count=0;


for(int j = m-1;j<n;j++){
	if(((m-1)-k<0) && arr[j]==1){
		count++;
		//cout << count;
	}
	else if(arr[j]==1 && arr[(m-1)-k]==1){
		if((m-1)-k==j)
			count++;
		else
		count=count+2;
	}

	k++;

}

if((m-1)-k>0){

	int index = m-k;
		for(int i=0;i<index;i++){
			if(arr[i]==1)
				count++;
		}
}

cout << count << endl;

return 0;
}

