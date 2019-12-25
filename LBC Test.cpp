#include <stdio.h>
#include <math.h>
float chuvi(float x,float y,float z){
	float c;
	c=x+y+z;
	return c;
}
float dientich(float x,float y,float z){
	float s,p;
	p=(x+y+z)/2;
	s=sqrt(p*(p-x)*(p-y)*(p-z));
	return s;
}
int main (){
	float a,b,c;
	printf("Nhap cac canh cua tam giac: \n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	while ((!((a+b>c)&&(a+c>b)&&(b+c>a)))||(a<0)||(b<0)||(c<0)){
		printf("Cac canh da nhap khong hop le, vui long nhap lai: \n");
		scanf("%f",&a);
		scanf("%f",&b);
		scanf("%f",&c);
	};
	printf("Chu vi cua tam giac la: %f\n",chuvi(a,b,c));
	printf("Dien tich cua tam giac la: %f\n",dientich(a,b,c));
	return 0;
}
