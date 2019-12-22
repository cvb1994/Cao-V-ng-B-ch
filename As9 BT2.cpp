#include <stdio.h>
#include <string.h>
bool ktchuoi(char a1[],char a2[]){
		int z=0,max=0;
		for (int j=0;j<strlen(a1);j++){
			if (a1[j]==a2[z]){
				z++;
				if (z>max){
					max=z;
				}
			} else {
				z=0;
			}
		}
		if (max==strlen(a2)){
			return true;
		}
	return false;
}
int main (){
	char s1[100],s2[100];
	printf("Nhap vao chuoi s1: ");
	scanf("%s",s1);
	printf("Nhap vao chuoi s2: ");
	scanf("%s",s2);
	if (ktchuoi(s1,s2)){
		printf("Chuoi s2 co nam trong s1.");
	} else {
		printf("chuoi s2 khong nam trong s1.");
	}
	return 0;
}
