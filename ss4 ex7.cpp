#include<stdio.h>
int main(){
	int year;
	printf("Moi ban nhap nam muon kiem tra : ");
	scanf("%d", &year);
	if((year%4==0 && year%100!=0) || (year%400==0)){
		printf("Day la nam nhuan ");
	} else {
		printf("Day khong phai la nam nhuan ");
	}
	return 0;
}
