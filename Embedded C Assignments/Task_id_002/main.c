#include <stdio.h>
#include "swap.h"
int main(){
	int A = 5;
	int B = 6;
	swap(&A,&B);
	printf("after swaping in main \n a = %d , b =%d \n",A,B);
}


void swap(int* A , int* B){
	int temp;
	temp= *A;
	*A=*B;
	*B=temp;
	printf("after swaping in function \n a = %d , b =%d \n",*A,*B);

}


