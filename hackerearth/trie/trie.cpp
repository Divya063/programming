#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


class node{
public:
	char data;
	unordered_map<char, node*>hashmap;
	bool isTerminal;
	ll num;

	node(char d){
		data=d;
		isTerminal=false;
		num=0;
	}
};

class Trie{
node* root;
public:
	Trie(){
		root = new node('\0');
	}

	void insert_node(string str){
		node* temp=root;
		for(int i=0; i<str.length(); i++){
			if(temp->hashmap.count(str[i])==0){
				node* child = new node(str[i]);
				temp->hashmap[str[i]]= child;
				temp = child;
				temp->num=temp->num+(i+1);
				cout << temp->num << endl;
			}

			else{
				temp=temp->hashmap[str[i]];
			}
		}

		temp->isTerminal=true;
	}

	ll search(string word){
		node* temp=root;
		for(ll i=0; i<word.length(); i++){
			if(temp->hashmap.count(word[i])!=0)
				temp=temp->hashmap[word[i]];
			else
				return 0;

		}

		return temp->num;
	}


};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll insertion, query;
cin >> insertion >> query;
Trie t;
for(ll i=0; i<insertion; i++){
	string n;
	cin >> n;
	t.insert_node(n);
}
for(ll i=0; i<query; i++){
	string str;
	cin >> str;
	cout << t.search(str) << endl;
}

return 0;
}

