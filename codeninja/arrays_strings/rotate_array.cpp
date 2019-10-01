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
int arr[][10] = {{1,2,3}, {4,5,6}, {7, 8, 9}};
int N = 3;
for( int x =0; x < N/2; x++){
	for(int y =x; y<N-x-1; y++){
		int temp = arr[x][y];
		arr[x][y] = arr[x][N-y-1];
		arr[x][N-y-1] = arr[N-x-1][N-y-1];
		arr[N-x-1][N-y-1]= arr[N-x-1][y];
		arr[N-x-1][y] = temp;
	}
}
return 0;
}

