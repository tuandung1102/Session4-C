#include<stdio.h>
int main(){
	int a, b, c;
	printf("Moi ban nhap vao canh thu nhat cua tam giac : ");
	scanf("%d", &a);
	printf("Moi ban nhap vao canh thu hai cua tam giac : ");
	scanf("%d", &b);
	printf("Moi ban nhap vao canh thu ba cua tam giac : ");
	scanf("%d", &c);
	if((a + b >= c) && (a + c >= b) && (b + c >= a)){
		printf("Day la 3 canh cua tam giac ");
	} else {
		printf("Day khong la 3 canh cua tam giac ");
	}
	return 0;
}
