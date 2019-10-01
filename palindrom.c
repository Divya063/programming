#include <stdio.h>

int main(){

char name[]="Divya";
char *ptr;
ptr=name;
while(*ptr!='\0')
{

printf("your name is %c",*ptr);
ptr++;
}

printf("\n");
return 0;
}
 
