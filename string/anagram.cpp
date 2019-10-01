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
string a,  b;
cin >> a >> b;
if(a.length()<b.length())
    	swap(a,b);
cout << a.length() << " " << b.length() << endl;


 sort(a.begin(), a.end());
 sort(b.begin(), b.end());
    int count=0;

    if(a==b){
        cout << 0;
    }

    else{
        for(int i=0;i<a.length();i++){
            for(int j=0; j<b.length();j++){
                if(a[i]==b[j]){
                	cout << b[i] << endl;
                    count=count+1;
                }
            }
        }

        cout << count;
    }

    return((a.length()+b.length())-(2*count));
return 0;
}

