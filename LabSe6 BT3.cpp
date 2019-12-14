#include <stdio.h>
int main (){
	int a[10];
	printf("Nhap gia tri vao mang la so le\n");
	for (int i=0;i<10;i++){
		do {
			printf("Nhap gia tri thu %d:",i+1);
			scanf("%d",&a[i]);
		} while (a[i]%2==0);
	}
	for (int i=0;i<10;i++){
		printf("Gia tri thu %d: %d\n",i+1,a[i]);
	}
	return 0;
}
