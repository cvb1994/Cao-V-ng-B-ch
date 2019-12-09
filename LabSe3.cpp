#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float p,s;
	printf("Nhap 3 canh cua tam giac:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if ((a+b>c)&&(a+c>b)&&(b+c>a)) {
		printf("Day la cac canh cua 1 tam giac");
		p=a+b+c;
		s=sqrt((p/2)*(p/2-a)*(p/2-b)*(p/2-c));
		printf("\nChu vi tam giac la %f m",p);
		printf("\nDien tich tam giac la %f m2",s);
	} else {
		printf("Day khong phai cac canh cua 1 tam giac");
	}
	return 0;
}
