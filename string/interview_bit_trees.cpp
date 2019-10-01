#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

class TreeNode{
	
	public:
		TreeNode **children;
	bool isTerminal;
	char data;
		TreeNode(char data){
			this->data = data;
			children = new TreeNode*[26];
			for(int i =0; i<26; i++){
				children[i] = NULL;
			}
			isTerminal = false;
		}
};

class Trie{

	TreeNode *root;
public:
	Trie(){

		root = new TreeNode('\0');
	}

	void insert(TreeNode* root, string word){
		if(word.size()==0){
			root->isTerminal = true;
		}
		TreeNode* child;
		int index = word[0];
		if(root->children[index-'0']!=NULL){
			child = root->children[index-'0'];
		}
		


	}


};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

return 0;
}

