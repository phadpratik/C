#include<stdio.h> 
void main(){
	int arr1[]={10,20,30,40};
	int arr2[]={50,60,70,80};

	int *ptr=arr1+1;
	int *ptr1=&arr1+5;

	printf("%d\n",*ptr);
	printf("%d\n",*ptr1);
}
