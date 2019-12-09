#include <stdio.h>
int main (){
	int n;
	printf("Nhap so n\n");
	scanf("%d",&n);
	if ((2<=n)&&(n<=7)) {
		printf("Day la ngay thu %d",n);
	} else {
		if (n==8){
			printf("Day la ngay chu nhat");
		} else {
			printf("Day ko phai ngay trong tuan");
		}
	}
	return 0;
}
