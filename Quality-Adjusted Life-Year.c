#include<stdio.h>

int main(){
	
	int n,i;
	double q,y,sum,QALY;
	
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++){
		scanf("%lf %lf",&q,&y);
		QALY=q*y;
		sum+=QALY;
	}
	printf("%.3lf\n",sum);
}
