#include <stdio.h>
int main (){
	int a[4][3],b[4][3];
	printf("Nhap gia tri cac phan tu cua ma tran A\n");
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("A [%d] [%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Nhap gia tri cac phan tu cua ma tran B\n");
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("B [%d] [%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Ma tran cua A+B la:\n");
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran cua A-B la:\n");
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			printf("%d\t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
