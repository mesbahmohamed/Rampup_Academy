#include <stdio.h>
#include "swap.h"
int main(){
	int A = 5;
	int B = 6;
	swap(A,B);
	printf("after swaping in main function \n A = %d , B =%d \n",A,B);
}


void swap(int A , int B){
	int temp;
	temp=A;
	A=B;
	B=temp;
	printf("after swaping in swap function \n A = %d , B =%d \n",A,B);

}


