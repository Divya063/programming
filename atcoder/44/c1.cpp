#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

/*void subsets(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subelements){
	subelements.push_back(sub);
	
	for(auto k : subelements){
		cout << "size " << subelements.size() << endl;
	for(auto l : k){
		cout << l << " ";
	}
	cout << endl;3
}

	for(int j=i; j<nums.size(); j++){
		sub.push_back(nums[j]);
		subsets(nums, j+1, sub, subelements);
		sub.pop_back();
	}
}*/

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
//vector<vector<int>>subelements;
ll n , a;
cin >> n >> a;
vector<int> nums;
for(int i=0; i<n; i++){
	ll t;
	cin >> t;
	nums.push_back(t);
}
vector<int> sub;
//subsets(nums, 0, sub, subelements);
ll count=0;
vector<vector<int>> subs = {{}};
        for (int num : nums) {
            int n = subs.size();
            for (int i = 0; i < n; i++) {
                subs.push_back(subs[i]); 
                subs.back().push_back(num);
            }
 }

 for(auto i : subs){
	for(auto j : i){
		cout << j << " ";
	}
	cout << endl;
}

for(auto i : subs){
	float sum=0;
	for(auto j : i){
		sum=sum+j;
	}
	if(i.size()!=0){
		float ans= sum/float(i.size());
		if(ans==a){
		count++;
		}
	}
}

cout << count;


return 0;
}

