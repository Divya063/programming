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
map<char, char> li;
ll n;
cin >> n;
string num;
cin >> num;
for(char i='1'; i<='9'; i++){
	char value;
	cin >> value;
	li[i]=value;
}
ll flag=0;
for(int i=0; i<n; i++){
	if(num[i]<li[num[i]]){
		num[i]=li[num[i]];
		flag=2;
	}

	else if(num[i]>li[num[i]] && flag==2){
		break;
	}
}


cout << num;


return 0;
}

