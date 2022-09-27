/* * * * *
 * * * * *
 * * * * *
 * * * * *  */

#include<stdio.h>

void main(){
	int row,col;
	printf("enter row\n");
	scanf("%d",&row);

	printf("enter col\n");
	scanf("%d",&col);

	for(int i=1;i<=col*row;i++){
		printf("*\t");
		if(i%col==0){
			printf("\n");
		}
	}
}
