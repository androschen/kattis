#include<stdio.h>
#include<math.h>

int main(){
	long long int a;
	double sisi,kel;
	
	scanf("%lld",&a);
	sisi=sqrt(a);
	kel=sisi*4;
	
	printf("%.16lf\n",kel);
	
	return 0;
}
