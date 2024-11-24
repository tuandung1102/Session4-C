#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap vao 1 so nguyen ");
	scanf("%d", &number);
	if(number%15==0){
		printf("So nguyen ban vua nhap chia het cho ca 3 va 5 ");
	} else if(number%3==0){
		printf("So nguyen ban vua nhap chia het cho 3 ");
	} else if(number%5==0){
		printf("So nguyen ban vua nhap chia het cho 5 ");
	} else{
		printf("So nguyen ban vua nhap khong chia het cho 3 hoac 5 ");
	}
	return 0;
}
