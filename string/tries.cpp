#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


class TrieNode{

public:
	char data;
	TrieNode **children;
	bool isTerminal;

	TrieNode(char data){
		this-> data = data;
		children = new TrieNode*[26];
		for(int i =0; i<26; i++){
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie{

	TrieNode *root;

public:
	Trie(){
		root = new TrieNode('\0');
	}


	void insert(TrieNode* root, string word){
	if(word.size()==0){
		root->isTerminal=true;
		return;
	}
	TrieNode* child;
	 int letter = word[0]-'a';
	 if(root->children[letter]!=NULL){
	 	child = root->children[letter];

	 }
	 else{
	 	child = new TrieNode(word[0]);
	 	root->children[letter] = child;
	 }

	 insert(child, word.substr(1));
	 delete child;

	}

	void insert(string word){
		insert(root, word);
	}

	bool search(TrieNode *root, string word){
		if(word.size() == 0){
			if(root->isTerminal==true){
				return true;
			}
			else{
				return false;
			}
		}

		int index = word[0]-'a';
		TrieNode* child;
		if(root->children[index]==NULL){
			return false;
		}
		else{
			child = root->children[index];
		}

		return search(child, word.substr(1));

	}

	bool search(string word){
		return search(root, word);
	}

	void remove1(TrieNode* root, string word){
		if(word.size()==0){
			if(root->isTerminal==true){
				root->isTerminal=false;
				return;
			}
		}

		int index = word[0]-'a';
		TrieNode* child;
		if(root->children[index]==NULL)
			return;
		else
			child = root->children[index];

		remove1(child, word.substr(1));

		//check if isterminal is false and the node has no children;

		if(child->isTerminal==false){
			for(int i =0; i<26; i++){
				if(child->children[i]!=NULL){
					return;
				}
			}

			delete(child);
			root->children[index] = NULL;
		}
	}

};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

Trie t;

t.insert("hello");
cout << t.search("hello");

return 0;
}

