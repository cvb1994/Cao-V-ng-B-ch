#include <stdio.h>
int main (){
	int n,x;
	printf("Nhap kich thuoc cua mang:");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("Nhap so can tim: ");
	scanf("%d",&x);
	int b=0;
	for (int i=0;i<n;i++){
		if (a[i]==x){
			printf("Vi tri gan nhat cua %d la: %d",x,i);
			b++;
			break;
		}
	}
	if (b==0)
	printf("So %d khong nam trong mang");
	return 0;
}
