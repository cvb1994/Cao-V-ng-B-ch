#include <stdio.h>
int main (){
	int n;
	do {
		printf("Nhap so nguyen duong n:");
		scanf("%d",&n);
	} while (n<0);
	int f=0;
	for (int i=1,z;;){
		z=f;
		f=f+i;
		if (f>=n){
			f=f-i;
			break;
		} else i=z;
	}
	printf("so f nho hon %d va gan nhat la: %d",n,f);
	return 0;
}
