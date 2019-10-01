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

int a, b;
cin>> a >> b;
if(a>b)
swap(a,b);
int count=0;
if(a==1 && b==1)
 {
 	cout << 0;
 	return 0;
}
while(a>0 && b>0){
	a=a+1;
	b=b-2;
	//cout << a << b << endl;
	if(a>b){
		swap(a, b);
	}
	count++;
}
cout << count;
return 0;
}

