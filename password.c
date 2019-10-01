#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdbool.h>

void main(){
char pass[100];
int count, count1, count2;

scanf("%s", pass);
for(int i=0;i<strlen(pass); i++){
if (isalpha(pass[i])){

if(isupper(pass[i])){
count++;
}
}
else{
if (isdigit(pass[i])){
count1++;
}
if(pass[i]=='$'){
count2++;
}
}
}
if((count>0 && count1>0) && count2>0){
printf("password is good to go");
}
else{
printf("change your password");
}}
