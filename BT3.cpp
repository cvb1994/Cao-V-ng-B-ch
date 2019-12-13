#include <stdio.h>
int main (){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	int f=0;
	for (int i=1,z,count=0;count<=(n-1);count++){
		z=f;
		f=f+i;
		i=z;
	}
	printf("so f la: %d",f);
	return 0;
}
