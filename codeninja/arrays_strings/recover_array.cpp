#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

void recover(int n, int input[]){

	int output[100];

	if(n%2!=0){

		int mid = n/2;
		int left = mid -1;
		int right = mid +1;
		output[mid] = input[0];
		int i =1;
		while(i<n){
			output[left] = input[i];
			i++;
			left--;
			output[right] = input[i];
			right++;
			i++;
		}

	}

	if(n%2==0){
		int mid = n/2;
		int left = mid-1;
		int right = mid;
		int i =0;
		while(i<n){
			output[left] = input[i];
			i++;
			left--;
			output[right] = input[i];
			right++;
			i++;
		}

	}

	for(int i=0; i<n ; i++){
		cout << output[i];

	}
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
int arr[100];
int n;
cin >> n;
for(int i=0; i<n; i++){
	cin >> arr[i];
}

recover(n, arr);

return 0;
}

