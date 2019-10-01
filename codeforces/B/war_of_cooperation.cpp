#include<bits/stdc++.h>

using namespace std;

void lcp1(string pattern, long long M, long long lcp[] ){

	lcp[0]=0;
	long long j=0;
	long long i=1;
	while(i<M){

		if(pattern[i]==pattern[j]){
			j++;
			lcp[i]=j;
			i++;
		}
		else if(pattern[i]!=pattern[j]){

			if(j!=0){
				j=lcp[j-1];
			}
			else{
				lcp[i]=0;
				i=i+1;
			}
		}
	}
}


void kmp(string pattern, string text){
	int count=0;
	long long M = pattern.length();
	long long N = text.length();
	long long lcp[M];
	lcp1(pattern, M, lcp);
	long long i=0, j=0;
	while(i<N){

		if(pattern[j]==text[i]){
			i++;
			j++;
		}
		if(j==M){
			count++;
			j=lcp[j-1];
		}
		else if(i<N && pattern[j]!=text[i]){
			if(j!=0)
				j=lcp[j-1];
			else
				i=i+1;
		}
	}
	cout << count <<endl;
}



int main(){

	string str, str1;
	cin >> str >> str1;
	kmp(str1, str);

}