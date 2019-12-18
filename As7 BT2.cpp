#include <stdio.h>
int main (){
	int a[4][4];
	int i,j;
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			printf("Nhap phan tu thu %d - hang %d: ",j,i);
			scanf("%d",&a[i][j]);
		}
	}
	float s;
	float tb=8;
	s=(a[0][0]+a[1][1]+a[2][2]+a[3][3]+a[0][3]+a[1][2]+a[2][1]+a[3][0])/tb;
	printf("Ma tran co dang: \n");
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}
	printf("Trung binh cong duong cheo cua ma tran la: %f",s);
	return 0;
}
