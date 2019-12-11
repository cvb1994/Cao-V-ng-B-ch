#include <stdio.h>
int main (){
	int n,s=1;
	printf("Nhap so n:");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		s=s*i;
	}
	printf("Gia tri cua %d! la: %d",n,s);
	return 0;
}
