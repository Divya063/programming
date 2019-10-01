#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  




int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
string s, s1;
cin >> s >> s1;
int plus = count(s.begin(), s.end(), '+');
int plus1 = count(s1.begin(), s1.end(), '+');
int question = count(s1.begin(), s1.end(), '?');
int needed= plus - plus1;
float form = nCr(question, needed);
float ans;
if(plus1!=plus && question==0)
	ans=0;
else
ans = form/(1<<question);
printf("%.10f", ans);

return 0;
}

