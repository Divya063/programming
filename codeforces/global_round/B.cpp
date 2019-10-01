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

ll n , m, k;
cin >> n >> m >> k;
int arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}

int min_sum=INT_MAX;

for (int i=0; i<n-k+1; i++) 
    { 
        int current_sum = 0; 
        for (int j=0; j<k; j++) 
            current_sum = current_sum + arr[i+j]; 
  
        min_sum = min(current_sum , min_sum ); 
    }
for(int i =0;i<n;i++){

	
}

    cout << min_sum << endl; 

return 0;
}

