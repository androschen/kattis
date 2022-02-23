#include<stdio.h>

int main(){
	int n,i,m,s;
	
	scanf("%d",&n);

	int summ=0;
	int sums=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&m,&s);
		summ+=m;
		sums+=s;
	}
	double velocity=(double)sums/60/summ;
	
	if(velocity<=1){
		printf("measurement error\n");
	}
	else{
		printf("%.9lf\n",velocity);
	}
	
	return 0;
}
