#include <stdio.h>
int main (){
	int n,s,count;
	do {
		printf("Nhap so nguyen duong n:");
		scanf("%d",&n);
	} while (n<0);
	if (n<9){
		s=n;
		printf("Tong cac chu so cua %d la: %d",n,s);
	} else {
		for (int m=n;m>0;){
			s=s+m%10;
			m=m/10;
		}
		printf("Tong cac chu so cua %d la: %d",n,s);
	}
	return 0;
}
