#include<stdio.h>
#include<math.h>

int main(){
	double n;
	
	scanf("%lf",&n);
	double p=pow(n,1/n);
	printf("%lf\n",p);
	
	return 0;
}
