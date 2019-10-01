#include<bits/stdc++.h>

using namespace std;

void lcp(string str, int M, int lps[]){

	int lcp[M];
	int j=0;
	int i=1;
	lcp[0]=0;
	while(i<M){
		if(str[j]==str[i]){
			j++;
			lcp[i]=j+1;
			i++;
			
		}
		else{
			if(j!=0){
				j=lcp[j-1];
			}
			else{
				lcp[i]=0;
				i++;
			}
		}
	}

}

void KMPSearch(char[] pattern, char[] text){
	int M=strlen(pattern);
	int N=strlen(text);
	int lps[M];
	lcp(pattern, M, lps);
	int i=0;
	int j=0;
	while(i<N){
		if(pattern[j]==text[i]){
			i++;
			j++;
		}

		if(j==M){
			cout << "Found pattern at" << i-j;
			j=lcp[j-1];
		}
		else if (i < N && pattern[j] != text[i]) { 
            if (j != 0) 
                j = lps[j - 1]; 
            else
                i = i + 1; 
        } 
    }
} 




int main(){

	string text = "ABABDABACDABABCABAB";
	string pattern = "ABABCABAB";
	int M=strlen(pattern);
	KMPSearch(pattern, text);
	
}
//codeforces War of the Corporations