#include <stdio.h>
int main (){
	int a,b,f;
	do {
		printf("Vui long nhap 2 so a,b (a<b):\n");
		scanf("\n%d",&a);
		scanf("\n%d",&b);
	} while (a>=b);
	for (int i=a;i<=b;i++){
		f=f+i;
	}
	printf("Tong cac so tu %d den %d: %d",a,b,f);
	return 0;
}
