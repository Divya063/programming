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

string a, b;
string str,str2;
cin >> a >> b;
int n= a.length();
auto pos=a.find(':');
auto pos2=b.find(':');
string min = a.substr(pos+1);
string hour = a.substr(0, pos);
string min1= b.substr(pos2+1);
string hour1=b.substr(0, pos2);
int sum= (stoi(hour)+stoi(hour1))/2;
int sum2= (stoi(min1)+stoi(min))/2;
str=to_string(sum);
str2=to_string(sum2);
if(sum2==0 && min=="00" && min1=="00"){
	str= to_string(sum);
cout << str << ":" << "30";
}
else{
if(to_string(sum).length()==1){
	 str='0'+to_string(sum);
	}
if(to_string(sum2).length()==1){
	str2='0'+to_string(sum2);
}

//cout << str << endl;
cout << str << ":" << str2;
}
//cout << str<< " "<< str1;
return 0;
}

