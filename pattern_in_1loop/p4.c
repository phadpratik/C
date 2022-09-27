/*       * 
 *     * * * 
 *   * * * * * 
 * * * * * * * *
 */

#include<stdio.h>

void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);

	int x=1;
	int y=row;
	int z=row*row+(row*(row-1));
	int flag=0;

	for(int i=1;i<=z;i++){
		if(x<y){
			printf("_\t");
			x++;
		}else{
			printf("*\t");
			x++;
		}
		if(i%row==0){
			flag=1;
			x=1;
			y=1;
			if(i%a==0){
				y++;
			}
		}
		if(flag==1){
			if(x<y){
				printf("*\t");
				x++;
			}
		}



		if(i%a==0){
			printf("\n");
			x=1;
			y=row;
			y=y-i;
			flag=0;
		}
	}
}

		

