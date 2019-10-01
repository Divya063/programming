# include <stdio.h>
void disp(int *);
void show(int **);

void main(){

	int marks[]={1,2,3,4,5,6};
	for(int i=0;i<6;i++){
		disp(&marks[i]);
}
}

void disp(int *n){

	show(&n);
}

void show(int m**){

     printf("%d", m**);
}
