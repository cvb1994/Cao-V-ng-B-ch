#include <stdio.h>
int main (){
	int n;
	printf("Nhap kich thuoc cua mang:");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		printf("Nhap gia tri thu %d:",i+1);
		scanf("%d",&ary[i]);
	}
	int min,max,nmin,nmax;
	min=max=ary[0];
	for (int i=0;i<n;i++){
		if (ary[i]>max)
		max=ary[i];
		if (ary[i]<min)
		min=ary[i];
	}
	nmin=nmax=ary[0];
	for (int i=0;i<n;i++) {
		if (ary[i]<max)
		nmax=ary[i];
		if (ary[i]>min)
		nmin=ary[i];
	}
	for (int i=0;i<n;i++){
		if (nmax<ary[i]&&ary[i]<max)
		nmax=ary[i];
		if (min<ary[i]&&ary[i]<nmin)
		nmin=ary[i];
	}
	printf("Gia tri gan lon nhat la %d\n",nmax);
	printf("Gia tri gan nho nhat la %d\n",nmin);
	return 0;
	
}

