#include <stdio.h>
int main (){
	int a[10];
	for (int i=0;i<10;i++){
		printf("Nhap gia tri thu %d: ",i);
		scanf("%d",&a[i]);
	}
	for (int i=0,z=0;i<10;i++){
		for(;a[i]>0;){
			z=z*10 + a[i]%10;
			a[i]=a[i]/10;
		}
		printf("So nghich dao cua so thu %d la: %d\n",i,z);
		z=0;
	}
	
	return 0;
}
