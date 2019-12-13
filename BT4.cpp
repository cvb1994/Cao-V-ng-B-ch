#include <stdio.h>
int main (){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	int f=0;
	for (int count1=0;count1<=(n-1);count1++){
		int f1=0;
		for (int count2=0,i=1,z;count2<=count1;count2++){
			z=f1;
			f1=f1+i;
			i=z;
		}
		f=f+f1;
	} 
	printf("tong la: %d",f);
	return 0;
}
