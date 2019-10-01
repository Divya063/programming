#include<bits/stdc++.h>

using namespace std;


bool compare(const pair<int, int>p1, const pair<int, int>p2){
    	if(p1.first==p2.first){
    		return p1.second< p2.second;
    	}
    	else
    		return p1.first <p2.first;
    }


int main(){

	int A;
	cin >> A;

	

	vector<pair<long long, long long >> ans;
    
    long long arr[A+1]; 
    arr[0]=arr[1]=0;
     for (long long i=2; i<=A; i++) 
        arr[i] = 1; 
    
    for(long long i=2;i<=sqrt(A);i++){
        
        if(arr[i]==1){
            
            for(long long p=2*i;p<=A;p+=i){
                arr[p]= 0;
            }
        }
    }
   
    for(long long i=0;i<A;i++){
        
        if(arr[i] && arr[A-i]){
            
            ans.push_back(make_pair(i, A-i));
        }
    }


    

    sort(ans.begin(), ans.end(), compare);

    
    
   
        cout << ans[0].first << " "
             << ans[0].second << endl; 
  
  
}