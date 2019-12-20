#include <stdio.h>
bool timso(int a[],unsigned int n,int x){
	for (int i=0;i<n;i++){
		if (a[i]==x)
		return true;
	}
	return false;
}
int main (){
	int a,b;
	printf("Nhap kich thuoc cua mang:");
	scanf("%d",&a);
	int ary[a];
	for (int i=0;i<a;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	printf("Nhap so can tim: ");
	scanf("%d",&b);
	if (timso(ary,a,b)){
		printf("So %d co nam trong mang",b);
	} else {
		printf("So %d khong nam trong mang",b);
	}
	return 0;
}
