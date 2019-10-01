#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
	
ll n, m;
cin >> n >> m;
string s;
cin >> s;
int flag = 0;
for(int i=0;i<m;i++)
for(int i=0;i<n-1;i++){
	if(s[i]== 'B' && s[i+1]== 'G'){
		swap(s[i], s[i+1]);
		i++;
	}
}

for(auto i : s){

	cout << i;
}

}