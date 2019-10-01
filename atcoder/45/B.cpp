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

string A, B, C;
cin >> A >> B >> C;
int a(0), b(0), c(0);
char now = 'a';

while(true){
	if(now=='a'){
		if(a==A.size()){
			cout << 'A' << endl;
			return 0;
		}
		now = A[a];
		a=a+1;
	}

	else if(now == 'b'){
		if(b == B.size()){
			cout << 'B' << endl;
			return 0;
		}

		now = B[b];
		b= b+1;
	}

	else{
		if(c ==C.size()){
			cout << 'C' << endl;
			return 0;
		}

		now = C[c];
		c=c+1;
	}
}


return 0;
}

