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
string s ="hello girl";
int n = s.length();
char arr[s.length()+1];
arr[s.length()] = '\0';
for(int i=0; i<n;i++){
	arr[n-1-i]= s[i];
}
cout << arr;
return 0;
}

