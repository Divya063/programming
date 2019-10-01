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
				//cout << temp->num << endl;
			}

			else{
				temp=temp->hashmap[str[i]];
			}
			++temp->num;
		}

		temp->isTerminal=true;
	}

	ll countprefix(string str){
		node* temp=root;
		ll n =str.length();
		for(ll i =0; i<n ;i++){
			if(temp->hashmap.count(str[i])==0)
				return 0;
			else
				temp=temp->hashmap[str[i]];
		}
		return temp->num;
	}

	
};



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll insertion;
cin >> insertion;

while(insertion--){
Trie* t = new Trie();
ll query;
cin >> query;
vector<string> map1;
bool result = true;
while(query--){
	string s;
	cin >> s;
	t->insert_node(s);
	map1.push_back(s);
	
}

sort(map1.begin(), map1.end());

for(auto i : map1){

	if(t->countprefix(i)>1){
		result=false;
		break;
	}

}

delete t;

if(result==false){
	cout << "NO" << endl;
}
else{
	cout << "YES" << endl;
}
}


return 0;
}

