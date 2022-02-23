#include<stdio.h>
#include<math.h>

int main(){
	double h,v,sudut,hasil;
	double x;
	double pi=3.14159265359;
	
	scanf("%lf %lf",&h,&v);
	sudut=v*pi/180;
	x=h/sin(sudut);
	hasil=ceil(x);
	printf("%.lf\n",hasil);
	
	return 0;
}
