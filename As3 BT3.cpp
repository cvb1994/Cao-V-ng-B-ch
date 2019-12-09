#include <stdio.h>
int main (){
	int t,n,sn;
	printf("Vui long nhap thang: ");
	scanf("%d",&t);
	printf("Vui long nhap ngay: ");
	scanf("%d",&n);
	if ((t==1)&&(n>=1)&&(n<=31)) {
		sn=n;
	} else 
		if ((t==2)&&(n>=1)&&(n<=28)) {
		sn=31+n;
	} else
		if ((t==3)&&(n>=1)&&(n<=31)) {
		sn=59+n;
	} else 
		if ((t==4)&&(n>=1)&&(n<=30)) {
		sn=90+n;
	} else 
		if ((t==5)&&(n>=1)&&(n<=31)) {
		sn=120+n;
	} else 
		if ((t==6)&&(n>=1)&&(n<=30)) {
		sn=151+n;
	} else 
		if ((t==7)&&(n>=1)&&(n<=31)) {
		sn=181+n;
    } else 
    	if ((t==8)&&(n>=1)&&(n<=31)) {
		sn=212+n;
	} else 
		if ((t==9)&&(n>=1)&&(n<=30)) {
		sn=243+n;
	} else 
		if ((t==10)&&(n>=1)&&(n<=31)) {
		sn=273+n;
	} else 
		if ((t==11)&&(n>=1)&&(n<=30)) {
		sn=304+n;
	} else 
		if ((t==12)&&(n>=1)&&(n<=31)) {
		sn=334+n;
	} else 
	printf("Ngay thang khong phu hop, vui long nhap lai\n");
	int i=sn%7;
	if (i==7) {
		printf("Day la ngay thu %d trong nam\n",sn);
		printf("Day la ngay chu nhat");
		
	} else 
		printf("Day la ngay thu %d trong nam\n",sn);
		printf("Day la ngay thu %d",i+1);
	
	return 0;
}
