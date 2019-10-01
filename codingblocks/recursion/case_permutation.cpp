#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005

#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


 void permute(string s, int i){

 	if(i==s.length()){
 		cout << s << " ";
 		//cout << s << " ";
 		return;
 	}

 	for(int j=i; j<s.length(); j++){

		swap(s[i], s[j]);// to toggle  a letter
		//cout << s[i];
		permute(s, i+1);
		swap(s[i], s[j]);

	}

 	}
void letterCasePermutation(string S) {
	permute(S,0);
    }


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
letterCasePermutation("abc");

}
