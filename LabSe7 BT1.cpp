#include <stdio.h>
int main (){
	int n;
	printf("Nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	int a[n],b,c;
	for (int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
		if (a[i]%2!=0){
			b=a[i];
			c=i;
		}
	}
	printf("So le cuoi cung cua mang o vi tri %d la: %d",c,b);
	return 0;
}
