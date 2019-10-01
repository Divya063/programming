#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
        cin >> arr[arr_i];
    }
    long k;
    cin >> k;

long sum=0;
    long count=0;
    for(int i =0; i<n ;i++){
        
        for(int j=1;j<=i+1;j++){        
        if(sum+arr[i]<k){
            
       sum= sum+arr[i];   
        count=count+1;
        }
        else{
            cout <<count <<endl;
            break;
        }
        }
    }

}
