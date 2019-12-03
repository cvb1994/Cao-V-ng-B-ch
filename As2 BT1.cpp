#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	printf("Nhap so c: ");
	scanf("%d",&c);
	max = a;
	if (max>b) {
		if (max>c) {
			printf("So lon nhat la %d",max);
		} else {
			max=c;
			printf("So lon nhat la %d",max);
		}
	} else {
		max=b;
		if (max>c) {
			printf("So lon nhat la %d",max);
		} else {
			max=c;
			printf("So lon nhat la %d",max);
		}
	}
	
}
