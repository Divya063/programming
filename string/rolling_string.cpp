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
string message = "";
int n = message.length();
    int flag=0;
    char arr[n];

    for(int_i=0;i<n;i++){
        if(message[i]=='a'){
            if(flag==0)
                flag=1;
            else
                flag=0;

        }

        if(flag==1){
          message[i] ^= 32;
          arr[i]= message[i];


        }
        else
            arr[i]= message[i];

    }

    return arr;
return 0;
}

