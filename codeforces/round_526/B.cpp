#include<bits/stdc++.h>

using namespace std;

bool check_palindrome(string str){

	int l = 0; 
    int h = str.size() - 1; 
 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            return false; 
        } 
    } 
    return true;
}



int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		string s;
		cin >> s;
		if(check_palindrome(s)){
				char temp1;
				int index;
				int flag=0;
				int size= s.size()/2;
			if((count(s.begin(), s.end(), s[0])!=s.size())){

				if(!check_palindrome(s))
					cout << s <<endl;
			else{
				
				for(int i=0;i<size;i++){
					if(s[i]!=s[size]){

						temp1=s[i];
						index =i;
						flag=1;
						break;
					}
				}
				char temp3=s[size];
				s[size]=temp1;
				s[index]=temp3;
				if(!check_palindrome(s))
					cout << s <<endl;
			}
			}
			else{
				if(flag==0)
				cout << "-1" <<endl;
			}


		}
		else{
			cout << s <<endl;
		}
			}

	}