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
char input[] = "aaabbccdsa";
string str = "";
   int i =0, count =0, j =0, k=0; 
   while(input[i]!='\0'){
   	count++;
   	if(input[i]!=input[i+1]){
       input[j]= input[i];
        j++;
       if(count!=1){
       input[j]= count+'0';
        j++;
       }
       count =0;
   	}
   	i++;
   }
    input[j]='\0';
    
 cout << input;
return 0;
}

