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
	int s=0,max=0;
	for (int i=0;i<n;i++){
		if (a[i]>=0){
			s=s+a[i];
			if (max<s)
			max=s;
		} else {
			s=0;
		}
		}
	printf("Chuoi so duong co tong lon nhat la: %d",max);
	return 0;
	return 0;
}
