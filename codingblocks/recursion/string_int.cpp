#include<bits/stdc++.h>

using namespace std;

int n=0;
int i=0;
int convert(char *str, int *i){
	if(*str == '\0' || isdigit(*str) )
		return *i;
	*i= *i*10 + *str - '0';

	return convert(str+1,i);

}


int main(){
	
	int i=0;
	cout << convert("123", &i);

}