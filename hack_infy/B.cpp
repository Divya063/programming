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
int n;
cin >> n;
int arr[n];
for(int i=0; i<n; i++){
	cin >> arr[i];
}


int min;
min = arr[0];
int temp = min;
  for (int i=0; i <= n-1; i++)
 {
   if ((arr[i] < 0) && (arr[i] > temp))
   {
   min = arr[i];
   temp = min;
   }
}
cout << min << endl;
int val = min;
while(min!=100){
val =min;
for(int i=0; i<n;i++){
	val+=arr[i];
}
if(val>0)
	break;
else{
	min =min+1;
}
}
return min;
return 0;

}

