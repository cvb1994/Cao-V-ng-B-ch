#include <stdio.h>
int main (){
	int n;
	printf("Nhap kich thuoc cua mang:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("Nhap gia tri thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Cac so le trong mang la:\n");
	for (int i=0;i<n;i++){
		if (a[i]%2!=0)
		printf("%d\n",a[i]);
	}
	return 0;
}
