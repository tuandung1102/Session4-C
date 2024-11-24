#include<stdio.h>
int main(){
	int number1, number2, number3;
	printf("Moi ban nhap vao so nguyen thu nhat : ");
	scanf("%d", &number1);
	printf("Moi ban nhap vao so nguyen thu hai : ");
	scanf("%d", &number2);
	printf("Moi ban nhap vao so nguyen thu ba : ");
	scanf("%d", &number3);
	if((number1<number3 && number3<number2) || (number2<number3 && number3<number1)){
		printf("So thu ba nam trong khoang giua so thu nhat va so thu hai ");
	} else {
		printf("So thu ba khong nam trong khoang giua so thu nhat va so thu hai ");
	}
	return 0;
}
