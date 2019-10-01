#include<bits/stdc++.h>

using namespace std;


int main(){

	vector<char> map;
	string a, b;
	cin >> a >> b;
	string christ=a+b;
	string pile;
	cin >> pile;
	int flag=0;
	for(int i=0;i<pile.length();i++)
		map.push_back(pile[i]);
for(int i=0;i<christ.length();i++){
		auto it=find(map.begin(), map.end(), christ[i]);
		if(it!=map.end())
		map.erase(it);
		else{
			cout << "NO";
			flag=1;
			break;
		}
}
if(flag!=1){
if(map.size()==0){
	cout << "YES";
}
else{
	cout << "NO";
}
}


	


}