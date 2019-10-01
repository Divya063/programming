#include<bits/stdc++.h>

using namespace std;


int main(){


	int x, y, z, t1, t2, t3;
	cin >> x >> y >> z >> t1 >> t2 >> t3;
	int stairs= abs(y-x)*t1;
	int lift= (abs(z-x)*t2)+2*t3+ (abs(y-x)*t2)+t3;
	if(stairs>=lift){
		cout << "YES" <<endl;

	}
	else
	{
		cout << "NO"<< endl;
	}
	


}