#include<bits/stdc++.h>

using namespace std;


int main(){

	vector <long long > A={9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9 };

/**
	string s="";
    
    for(int i=0;i<A.size();i++){
        s=s+to_string(A[i]);
    }

    long long n=0;

    for(int i=0;i<s.length();i++){

    	n=n*10+(s[i]-'0');
    }

    
    long long  n1=n+1;
    string newstring = to_string(n1);
    vector <long long> arr;
    for(int i=0;i<newstring.size();i++){
        arr.push_back(newstring[i]-'0');
    }

    for(int i=0;i<newstring.size();i++){
        cout << arr[i] << " ";
    }

    **/

    vector <int> ans;
    int carry=1;
    reverse(A.begin(), A.end());
    for(int i=0;i<A.size();i++){

    	int sum= A[i]+carry;
    	ans.push_back(sum%10);
    	carry= sum/10;

    }

    while(carry){

    	ans.push_back(carry%10);
    	carry=carry/10;

    }

    while(ans[ans.size()-1]==0 && ans.size()>1){
    	ans.pop_back();
    }

    reverse(ans.begin(), ans.end());
    /*for(int i=0;i<ans.size();i++ ){

    	cout << ans[i] << " ";
    }*/
    return ans;


    /**while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
                ans.pop_back();
            }**/
    
}