#include<stdio.h>
#include<string.h>

void main(){

char name[5];
gets(name);
int i, len;
len=strlen(name);
for (i=len;i>0;i++){
printf("%c",*(name+i));
}
}
