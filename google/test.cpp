#include<bits/stdc++.h>

using namespace std;



int main(){
	
	string str="2-4A0r7-4k";
	int k=4;
	int count=0;
	std::replace(str.begin(), str.end(), '-', ' ');  // replace ':' by ' '

	vector<string> array;
	stringstream ss(str);
	string temp;
	while (ss >> temp)
    	array.push_back(temp);
    for(int i=0;i<array.size();i++){
    	cout << array[i] << " ";
    	count+=array[i].length();
    }
    cout << "count " << count <<endl;
    int size=0;
    vector<string> str1;
    string str2="";
    if(count%4==0){
    	for(int i=0;i<array.size();i++){
    		for(int j=0;j<array[i].length();j++)
    		if(size<4){
    			str2=str2+array[i][j];
    			//cout << str2;
    			size++;
    		}
    		if(size==k){
    			str1.push_back(str2);
    			str="";
    			size=0;
    		}
    	}
    }
    for(int i=0;i<str1.size();i++){
    	cout << str1[i] << " ";
    }


}