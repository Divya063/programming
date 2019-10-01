#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

int t;

cin >> t;

while(t--){
	ll count=0, count1=0;
	ll best=INT_MAX, j=0, flag=0;

	string t, t1;
	cin >> t >> t1;

	for(int i=0;i<t.length();i++){

		
		if(t[i]==t1[j]){

			count1++;
			//cout << count1 << endl;
			//cout << t1[j] << endl;
			j++;
			//cout << count1 << t1.length() << endl;
			if(count1!=t1.length())
			continue;
		}
		else
			count++;

		if(count1==t1.length()){
			j=0;
			flag=1;
			best=min(best, count);
			count=0;
			//cout << "HERE";
			count1=0;
		}

		
	}
	if(!flag || best==0)
		cout << "NO" <<endl;
	else{
	cout << "YES" <<endl;
	cout << best << endl;
	}
}
return 0;
}

