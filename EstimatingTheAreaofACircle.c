#include<stdio.h>
#include<math.h>

int main(){
	int m,c;
	double r,pi=3.14159265359;
	
	while(1){
		scanf("%lf %d %d",&r,&m,&c);
		if(r==0&&m==0&&c==0){
			break;
		}
		double LReal=pi*r*r;
		double LEstimate=(double)c/m*pow(2*r,2);
		
		printf("%lf %lf\n",LReal,LEstimate);
	}
	
	return 0;
}
