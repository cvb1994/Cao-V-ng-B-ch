#include <stdio.h>
#include <math.h>
int main (){
	int a,b;
	printf("Nhap 2 so a,b:\n");
	scanf("\n%d",&a);
	scanf("\n%d",&b);
	if (a==0 && b==0){
		printf("Khong co uoc chung lon nhat");
	} else {
		int a1,b1;
		a1=abs(a);
		b1=abs(b);
		for (int i=b1;i!=0;i--){
			if (a1%i==0 && b1%i==0){
				printf("Uoc chung lon nhat cua %d va %d la: %d",a,b,i);
				break;
			}
			}
		}
	return 0;
}
