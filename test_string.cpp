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
char check;
char num;
int slide;
cin >> num >> slide;
// if(num+slide<'z'){
// 	check = num+slide;
// }
// else{
// 	check = abs(26-(num+slide));
// }

if(num-slide>'a'){
	check = num-slide;
}
else{
	check = abs(26+(num-slide));
}


cout << check << endl;
return 0;
}

