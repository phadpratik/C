#include<stdio.h>

void main(){
	int num;
	printf("enter row\n");
	scanf("%d",&num);

	
	int j=0;
	int i=0;

	while(i<num){
		if(j<(i+num)){
			if(j<(num-i-1)){
				printf("\t");
				j++;	
			}else{
				printf("*\t");
				j++;
			}
		}else{
			j=0;
			i++;
			printf("\n");
		}
	}
}



