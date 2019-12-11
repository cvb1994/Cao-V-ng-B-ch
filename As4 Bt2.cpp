#include <stdio.h>
int main (){
	int a,b,c;
	printf("Nhap cac canh cua tam giac:\n");
	scanf("\n%d",&a);
	scanf("\n%d",&b);
	scanf("\n%d",&c);
	for (;!((a+b>c)&&(a+c>b)&&(b+c>a));) {
		printf("Day khong phai cac canh cua 1 tam giac, vui long nhap lai\n");
		scanf("\n%d",&a);
		scanf("\n%d",&b);
		scanf("\n%d",&c);
	}
	printf("Day la cac canh cua 1 tam giac");
	return 0;
}
