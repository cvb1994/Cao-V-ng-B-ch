#include <stdio.h>
int main (){
	int n,z;
	printf("Nhap so n:");
	scanf("\n%d",&n);
	for (int m=0;n>0;){
		m=n%10;
		z=z*10+m;
		n=n/10;	
	}
	printf("So nghich dao la: %d",z);
	return 0;
}
