#include<bits/stdc++.h>

using namespace std;


map<char, int> imap;
map <char, int> ::iterator itr;

void permute_util(vector<char> &str, vector<int> &count, char result[], int level, int size) {

	if (level == size){

		for(int i=0;i<size;i++){

			cout << result[i];
		}
		cout << endl;
	return;
}

	for (int i = 0; i < size; i++) {
		if (count[i] == 0)
			continue;
		result[level] = str[i];
		count[i] = count[i] - 1;
		permute_util(str, count, result, level + 1, size);
		count[i] += 1;
	}
}

void permute(int arr1[], int size) {

	for (int i = 0; i < size; i++) {

	
		if (imap.find(arr1[i]) == imap.end()) {
			imap[arr1[i]]=1;			
		}

		else
			imap[arr1[i]] = imap[arr1[i]] + 1;
	}

	vector<char> str;
	vector<int> count;

	for (const auto &myPair : imap) {
		 str.push_back(myPair.first);
		 count.push_back(myPair.second);
	}
	
	char result[size];
	for(int i=0;i<size;i++){
		result[i]='0';
	}

	permute_util(str, count, result, 0, size);

}



int main() {

	int arr[] = {'B', 'C', 'A', 'A'};
	int n= sizeof(arr)/sizeof(arr[0]);
	permute(arr, n);


}
