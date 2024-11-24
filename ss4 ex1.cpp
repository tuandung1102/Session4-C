#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap vao 1 so nguyen : ");
	scanf("%d", &number);
	if(number>0){
		printf("Day la so nguyen duong ");
	} else if(number==0){
		printf("0 khong la so nguyen duong hay so nguyen am ");
	} else {
		printf("Day la so nguyen am ");
	}
	return 0;
}
