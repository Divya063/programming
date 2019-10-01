#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

bool comp(pair<char, int>& a, pair<char, int>& b){

		return a.second<b.second;
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
map<char, int> arr;
vector<string> str;
for(int i=0;i<3;i++){

	string a;
	cin >> a;
	str.push_back(a);
}

arr['A']=0;
arr['B']=0;
arr['C']=0;
for(auto i: str){
	if(i[1]=='<'){
		//cout << i[2] << endl;
		arr[i[2]]++;
		//cout << arr[i[2]];
	}
	else
		arr[i[0]]++;
}

vector<pair<char, int> > ans(arr.begin(), arr.end());

sort(ans.begin(), ans.end(), comp);

if(arr['A']==arr['B'] && arr['B']==arr['C'])
cout << "Impossible" ;

else{

for(auto i: ans){
	cout << i.first;
}
}
return 0;
}

