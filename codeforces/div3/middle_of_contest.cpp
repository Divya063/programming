#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
int h1, m1;
scanf("%d:%d", &h1, &m1);
int h2, m2;
scanf("%d:%d", &h2, &m2);
int minutes1 = (h1*60)+m1;
int minutes2 = (h2*60)+m2;
int avg = (minutes1+minutes2)/2;
printf("%02d:%02d", avg/60, avg%60);
return 0;
}

