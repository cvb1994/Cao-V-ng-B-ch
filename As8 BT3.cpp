#include <stdio.h>
int timhangtongmax(int a[4][4]){
	int max,s,smax;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			s+=a[i][j];
		}
		if (s>smax){
			smax=s;
			max=i;
		}
		s=0;
	}
	return max;
}
int main (){
	int ary[4][4];
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			printf("Nhap phan tu ary[%d][%d]: ",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	printf("Ma tran da nhap co dang: \n");
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
			printf("%d\t",ary[i][j]);
		}
		printf("\n");
	}
	printf("Hang co tong gia tri lon nhat la: %d",timhangtongmax(ary));
	return 0;
}
