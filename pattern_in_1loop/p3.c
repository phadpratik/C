/*         *
 *      *  *
 *   *  *  *   */

#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);
	int x=1;
	int y=row;

	for(int i=1;i<=row*row ;i++){
		if(x<y){
			printf(" ");
			x++;
		}else{
			printf("* ");
			x++;
		}

		if(i%row==0){
			printf("\n");
			x=1;
			y--;
		}
	}
}
