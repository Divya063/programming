#include<bits/stdc++.h>

using namespace std;


bool check_permutation(string a, string b){

	int number_char = 128;

	int count[number_char]={0};
	for(int i=0; a[i]&&b[i];i++){
		count[a[i]]++;
		count[b[i]]--;

	}
	if(a.size()!=b.size()){
		return false;
	}

	for(int i=0;i<number_char;i++){

		if(count[i]){
			return false;

		}
	}

	return true;


}

int main(){

string a,b;
cin >> a >> b;

cout << check_permutation(a, b);

}