#include <stdio.h>
int main (){
	int sl=1,s=0;
	for (int i=1;i<=4;i++){
		s=s+sl;
		sl=sl+2;
		
	}
	printf("Tong 100 so le dau tien lon hon 0: %d",s);
	return 0;
}
