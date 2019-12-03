#include <stdio.h>
int main(){
	int a,b,c,min;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	printf("Nhap so c: ");
	scanf("%d",&c);
	min = a;
	if (min<b) {
		if (min<c) {
			printf("So nho nhat la %d",min);
		} else {
			min=c;
			printf("So nho nhat la %d",min);
		}
	} else {
		min=b;
		if (min<c) {
			printf("So nho nhat la %d",min);
		} else {
			min=c;
			printf("So nho nhat la %d",min);
		}
	}
}
	
