#include<stdio.h>
int main(){
	int a, b;
	printf("Moi ban nhap vao chi so cu : ");
	scanf("%d", &a);
	printf("Moi ban nhap vao chi so moi : ");
	scanf("%d", &b);
	int total = b - a;
	if(total >= 0 && total < 50){
		int total1 = total * 10000;
		printf("Tien dien tieu thu thang nay cua ban la : %dVND", total1);
	} else if(total<100){
		int total2 = total * 15000;
		printf("Tien dien tieu thu thang nay cua ban la : %dVND", total2);
	} else if(total<150){
		int total3 = total * 20000;
		printf("Tien dien tieu thu thang nay cua ban la : %dVND", total3);
	} else if(total<200){
		int total4 = total * 25000;
		printf("Tien dien tieu thu thang nay cua ban la : %dVND", total4);
	} else {
		int total5 = total * 30000;
		printf("Tien dien tieu thu thang nay cua ban la : %dVND", total5);
	}
	return 0;
}

