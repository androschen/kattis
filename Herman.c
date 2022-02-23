#include<stdio.h>
#include<math.h>

int main(){
	long long int r;
	double pi=3.14159265359;
	
	scanf("%lld",&r);
	double luas=pi*r*r;
	double area=pow(r,2);
	
	printf("%.4lf\n",luas);
	printf("%.4lf\n",area*2);
	
	return 0;
}

