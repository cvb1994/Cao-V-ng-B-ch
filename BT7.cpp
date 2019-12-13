#include <stdio.h>
int main (){
	int n,count;
	do {
		printf("Nhap so nguyen duong n:");
		scanf("%d",&n);
	} while (n<0);
	if (n<9) 
	printf("So %d co 1 chu so.",n);
	else {
		for (int m=n;m!=0;){
		m=m/10;
		count++;
	}
	printf("So %d co %d chu so.",n,count);
	}
	return 0;
}
