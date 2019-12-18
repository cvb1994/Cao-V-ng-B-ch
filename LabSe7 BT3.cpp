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
	int c1=0,max=0;
	for (int i=0;i<n;i++){
		if (a[i]>=0){
			c1++;
			if (max<c1)
			max=c1;
		} else {
			c1=0;
		}
		}
	printf("So luong so duong lien tiep lon nhat la: %d",max);
	return 0;
}
