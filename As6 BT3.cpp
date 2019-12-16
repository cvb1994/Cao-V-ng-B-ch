#include <stdio.h>
int main (){
	int n;
	printf("Nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("Nhap gia tri thu %d:",i);
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
		if (a[i]<0){
			a[i]=0;
		}
	}
	for (int i=0;i<n;i++){
		printf("Gia tri thu %d: %d\n",i,a[i]);
	}
	return 0;
}
