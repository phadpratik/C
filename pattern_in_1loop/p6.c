#include<stdio.h>

void main(){
	int row;
	printf("enter row \n");
	scanf("%d",&row);

	int x=1;
	int z=row*row+(row*(row-1));
	int y=row;

	for(int i=1;i<=z;i++){
		if(x<y){
			printf("\t");
			x++;
			}else{
			printf("*\t");
			x++;
			}
			

