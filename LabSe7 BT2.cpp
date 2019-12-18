#include <stdio.h>
int main (){
	int n;
	printf("Nhap kich thuoc mang:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&a[i]);
	}
	int min;
	for (int i=0;i<n;i++){
		if (a[i]>0){
			min=a[i];
			break;
		}
	}
	for (int i=0;i<n;i++){
		if (a[i]>0 && a[i]<min){
			min=a[i];
		}
	}
	printf("So duong nho nhat la: %d",min);
	return 0;
}
