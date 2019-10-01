#include<bits/stdc++.h>

using namespace std;

struct TrieNode{


    /* nodes store a map to child node */
 	unordered_map<char, TrieNode*> map;
 	bool isEndOfWord;


};

TrieNode getNewNode(){

	TrieNode* newNode = new TrieNode;

	TrieNode->isEndOfWord= False;
	 return newNode;
}

void insert(TrieNode*& root, const string& str){

	if(root = nullptr){

		root = getNewNode();
	}

	TrieNode* temp =root;
	for(int i=0;i<str.length(); i++){

		char x= str[i];

		if(temp->map.find(x)==temp->map.end()){

			temp->map[x]= getNewNode();
		}

	temp = temp->map[x];
	}

	temp->isEndOfWord = true;


}

bool search(Trie* root, const string& str)
{
    /*return false if Trie is empty*/
    if (root == nullptr)
        return false;
 
    Trie* temp = root;
    for (int i = 0; i < str.length(); i++) {
 
        /* go to next node*/
        temp = temp->map[str[i]];
 
        if (temp == nullptr)
            return false;
    }
 
    return temp->isEndOfWord;
}

bool delete(Trie* root, string& str, int i){

if(i== str.length()){

	if(!root->isEndOfWord){
		return false;
	}

	root->isEndOfWord=false;
	return  node->map.size()==0;

}

Trie* node = root->map[str[i]];
if (node == null) {
            return false;
        }
bool shouldDeleteCurrentNode = delete(node, str, i + 1);

        //if true is returned then delete the mapping of character and trienode reference from map.
        if (shouldDeleteCurrentNode) {
            root->map.erase(str[i]);
            //return true if no mappings are left in the map.
            return node->map.size()==0;
        }
        return false;


}


void main(){


}