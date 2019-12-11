#include <stdio.h>
int main (){
	int n,kt=0;
	printf("Nhap so n:");
	scanf("\n%d",&n);
	if (n==1) {
		printf("Day khong phai so nguyen to");
	}
	for (int i=2;i<n;i++){
		if (n%i==0) {
			printf("Day khong phai so nguyen to");
			kt=1;
			break;
		}
	}
	if (kt==0)
	printf("Day la so nguyen to");
	return 0;
}
