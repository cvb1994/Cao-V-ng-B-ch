#include <stdio.h>
int main (){
	int n,m;
	printf("Nhap so n:");
	scanf("%d",&n);
	m=n;
	if (n<=1){
		printf("Khong co so nguyen to");
	}
	printf("Cac so nguyen to nho hon %d la:",n);
	for (int i=2;i<=n;i++){
		int kt=0;
		for (int j=2;j<i;j++){
			if (i%j==0){
				kt++;
			}
			}
		if (kt==0) {
				printf("\n\t%d",i);
		}
	}
	return 0;
}
