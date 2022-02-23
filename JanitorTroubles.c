#include<stdio.h>
#include<math.h>

int main(){
	double s1,s2,s3,s4,avg,persegi;

	scanf("%lf %lf %lf %lf",&s1,&s2,&s3,&s4);
	
	avg=(s1+s2+s3+s4)/2;
	persegi=sqrt((avg-s1)*(avg-s2)*(avg-s3)*(avg-s4));
	
	printf("%lf\n",persegi);
	return 0;
}
