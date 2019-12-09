#include <stdio.h>
 int main (){
 	float s=0;
 	int n;
 	printf("Nhap so n:");
 	scanf("%d",&n);
 	for (int i=1;i<=n;i++) {
 		s=s+(1/(float)i); 		
	 }
	 printf("Tong S bang: %f",s);
 	return 0;
 }
