#include<stdio.h>

void main(){
	int row;
	printf("enter row no\n");
	scanf("%d",&row);

	int x=0;
	int y=(row*row)+((row*(row-1)))/2+(row-1);
	int z=0;

	for(int i=0;i<y;i++){
		if(z<(row+x)){
			if(z<(row-x-1)){
				printf("\t");
				z++;
			}else{
				printf("*\t");
				z++;
			}
		}else{
			z=0;
			x=x+1;
			printf("\n");
		}
	}printf("\n");
}

