#include<stdio.h>

void main(){
        int row;
        printf("enter row\n");
        scanf("%d",&row);
        int x=1;
        int y=row;

        for(int i=1;i<=row*row;i++){
                if(x<y){
                        printf("\t");
                        x++;
                }else{
                        printf("*\t");
                        x++;
                }
		int flag=0;
		if(i%row==0){
			flag=1;
		}
		if(flag==1){

		int x=1;
                int y=1;
		int a=row*(row-1);
        for(int i=1;i<=a;i++){

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


                if(i%row==0){
                        printf("\n");
                        x=1;
                        y--;
                }
        }
}

