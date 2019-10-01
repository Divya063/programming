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
ll n, k;
vector<pair<ll, ll>> vec;
cin >> n >> k;
// let n-2 be maximum value of k as minimum distance needs to 2
ll sum =0;
for(int i=1; i<=n-2; i++){
    sum+=i;
}
if(k>sum){
    cout << -1;
    return 0;
}
for(int i=2; i<=n; i++){
    vec.push_back({1, i});
}
ll d = sum-k;
for(int i=2; i<=n; i++){
    for(int j =i+1; j<=n; j++){
        if(d==0){
            cout << vec.size() << endl;
            for(auto v:vec){
                cout << v.first << " " << v.second << endl;
            }
            return 0;
        }
        vec.push_back({i, j});
        d--;
    }
}
return 0;
}

