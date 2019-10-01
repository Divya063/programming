#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
	cin >> arr[i];
}
int index[N];
memset(index, -1, sizeof(index));
int dist[N]={0};
vector<int> vec;

for(int i=0; i<n; i++){
	if(index[arr[i]]!=-1){
		if(dist[arr[i]]==0){
			dist[arr[i]]=i-index[arr[i]];
		}
		else if(dist[arr[i]]!=i-index[arr[i]]){
			dist[arr[i]] =-1;
		}
	}

	else{
		vec.push_back(arr[i]);
	}
	index[arr[i]]= i;

}

vector <int> r;
	for(int i=0;i<vec.size();i++)
		if(dist[vec[i]]!=-1)
			r.push_back(vec[i]);
	sort(r.begin(),r.end());
	cout<<r.size()<<"\n";
	for(int i=0;i<r.size();i++)
		cout<<r[i]<<" "<<dist[r[i]]<<"\n";
	

return 0;
}

