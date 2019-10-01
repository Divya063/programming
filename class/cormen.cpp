#include<bits/stdc++.h>

using namespace std;

#define ll long long





int main(){

ll n , k;
cin >> n >> k;

ll arr[n];

for(int i=0;i<n;i++){

	cin >> arr[i];
}	

ll arr1[n]={0};

ll sum=0, count =0;
arr1[0]=arr[0];
sum=sum+arr1[0];

for(int i=1;i<n;i++){

if(sum+arr[i]<k){

	arr1[i]= (k-(sum+arr[i]))+arr[i];
	count= count + k-(sum+arr[i]);
	sum=arr1[i];
}

else{
arr1[i]= arr[i];
sum= arr1[i];
}


}
cout << count << endl;
for(int i=0;i<n;i++){
	cout << arr1[i] << " ";
}

}