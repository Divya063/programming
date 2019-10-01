#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;


int binary_search(int prefix_sum[], int key, int l, int r){

	int mid;  
    while (l < r)  
    {  
        mid = l + ((r - l) >> 1); // avoid integer overflow
        if(key > prefix_sum[mid])
        	l = mid + 1;
        else
        	r = mid;  
    }  
    return (prefix_sum[l] >= key) ? l : -1; 
}


string random_server(string server_names[], int size[], int count){
	// calculate prefix sum
	int prefix_sum[count] = {0};
	prefix_sum[0] = size[0];
	for(int i = 1; i<count; i++){
		prefix_sum[i]= prefix_sum[i-1]+ size[i];
	}
	// generate random number
	int random = (rand() % prefix_sum[count - 1]) + 1; 

	// Can also use stl lower_bound
	int index = binary_search(prefix_sum, random, 0, count - 1);  
    return server_names[index];  

}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
string server_names[N];

// Enter number of servers
int number_of_servers;
cout << "Enter number of servers" << endl;
cin >> number_of_servers;

// Enter names of servers
cout << "Enter names of the servers" << endl;
for(int i =0; i<number_of_servers; i++){
	cin >> server_names[i];
}

// Enter the size of servers respectively
int size[N];
cout << "Enter sizes" << endl;
for(int i=0; i<number_of_servers; i++){
	cin >> size[i];
}
// Use a different seed value for every run.  
srand(time(NULL));  

// Testing, run 100 times
for(int i =0; i<100; i++){
	string ans = random_server(server_names, size, number_of_servers);
	cout << ans << " ";
}

return 0;
}

