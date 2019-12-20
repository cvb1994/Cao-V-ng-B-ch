#include <stdio.h>
int timsofibo(int a){
	int x1=0,x2=1;
	for (int i=0,z;i<a;i++){
		z=x1;
		x1=x2+x1;
		x2=z;
	}
	return x1;
}
int main (){
	int n;
	do {
		printf("Nhap so n:");
		scanf("%d",&n);
	} while (n<0);
	printf("So Fibonacci o vi tri %d la: %d",n,timsofibo(n));
}
