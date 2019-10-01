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

vector<float> weight={1.50, 1.50, 1.50, 1.50, 1.50};


int n = weight.size();
    sort(weight.begin(), weight.end());
    int count =0;
    cout << weight.size() << endl;
    for(int i=0; i<n-1; i++){
        if(weight[i]+weight[i+1]<=3){
            i++;
            count++;

        }
        else{
            count++;
            cout << count << endl;
        }
        }
        
        if(weight[weight.size()-1]>=3.0 && weight.size()%2==0)
         cout << count+1;
     	else if(weight[weight.size()-1]<=3.0 && weight.size()%2)
     		cout << count+1;
     	else
     		cout << count;

return 0;
}

