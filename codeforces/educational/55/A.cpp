#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int t;
	cin >> t;
	while(t--){

		int n, x, y,d;
		cin >> n >> x >> y >>d;
		if(y-x>=d){
			cout<<(y-x)/d <<endl;
		}
		else if(y-x<d){
			int num=x;
			int sub=num-d;
			while(num!=y){				
				if(sub<=0){}
					num=1;
					sub=abs(num-sub);
				}
				num=abs(num-d)
			}
		}
	}

}