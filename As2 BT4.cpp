#include <stdio.h>
int main (){
	int x,y,a;
	printf("Nhap gia tri x:");
	scanf("%d",&x);
	printf("Nhap gia tri y:");
	scanf("%d",&y);
	a=x;
	x=y;
	y=a;
	printf("Gia tri moi cua x la: %d",x);
	printf("\nGia tri moi cua y la: %d",y);
}
