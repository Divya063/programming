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
vector<int> A{3};
int B = 3;
//ios_base& scientific (ios_base& str);
int n = A.size(), result = 0, result1 = 0;
    int low =0, high = n-1, mid;
    while(low<=high){
        mid = low +(high-low)/2;
        if(A[mid] == B){
            result = mid;
            high = mid-1;
        }
        
        else if(A[mid]<B)
             low = mid+1;   
        else if(B < A[mid]){
            high = mid-1 ;
        }
    }
    cout << result;
    low = 0, high = n-1;
    while(low<=high){
         mid = low +(high-low)/2;
        if(A[mid] == B){
            result1 = mid;
            low = mid+1;
        }
        
        else if(A[mid]<B)
             low = mid+1;   
        else if(B < A[mid]){
            high = mid-1;
        }
    }

    cout << result1;
return 0;
}

