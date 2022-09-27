/*  * 
 *  * *
 *  * * *
 *  * * * *  */

#include<stdio.h>

void main(){
	int row;
	printf("enter row \n");
	scanf("%d",&row);
	int x=1;
	int y=1;
	for(int i=1;i<=row*row;i++){

		if(x<=y){
			printf("*\t");
			x++;
		}

		if(i%row==0){
			printf("\n");
			x=1;
			y++;
			
		}
	}
}


