#include<stdio.h>

int main(){
	int L,i;
	double c;
	
	scanf("%lf",&c);
	scanf("%d",&L);
	double w[L];
	double l[L];
	double sum=0;
	for(i=0;i<L;i++){
		scanf("%lf %lf",&w[i],&l[i]);
		double hasil=w[i]*l[i];
		sum+=hasil;
	}
	double biaya=sum*c;
	printf("%.8lf\n",biaya);
	return 0;
}
