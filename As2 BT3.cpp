#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float x1,x2,delta;
	printf("Phuong trinh bac 2 co dang: ax^2+bx+c=0\n");
	printf("Nhap so a:");
	scanf("%d",&a);
	printf("Nhap so b:");
	scanf("%d",&b);
	printf("Nhap so c:");
	scanf("%d",&c);
	if (a!=0) {
		delta=(b*b) - (4*a*c);
		if (delta<0) {
			printf("Phuong trinh vo nghiem");
		} else {
			if (delta>0) {
				x1=(-b+sqrt(delta))/(2*a);
				x2=(-b-sqrt(delta))/(2*a);
			} else {
				x1=x2=-b/(2*a);
			}
			printf("Phuong trinh co 2 nghiem: x1=%f  x2=%f",x1,x2);
		}
	} else {
		x1= -c/b;
		printf("Phuong trinh co 1 nghiem: x1=%f",x1);
	}
	return 0;
}
