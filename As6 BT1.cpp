#include <stdio.h>
int main (){
	int n;
	printf("Nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("Nhap gia tri thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	int s=0,count=0;
	for (int i=0;i<n;i++){
		if (a[i]%2!=0){
			count++;
			s=s+a[i];
		}
	}
	printf("Trung binh cong cac so le: %f",s/(float)count);
	return 0;
}
