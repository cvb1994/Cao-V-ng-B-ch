#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap 2 so a,b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if (a>=b) {
		printf("Ket qua la %d",a/b);
	} else {
		printf("Ket qua la %d",a*b);
	}
	return 0;
}
