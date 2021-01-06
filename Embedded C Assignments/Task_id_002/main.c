#include <stdio.h>
#include "swap.h"
int main(){
	int a = 5;
	int b = 6;
	swap(&a,&b);
	printf("after swaping in main \n a = %d , b =%d \n",a,b);
}


void swap(int* a , int* b){
	int temp;
	temp= *a;
	*a=*b;
	*b=temp;
	printf("after swaping in function \n a = %d , b =%d \n",*a,*b);

}


