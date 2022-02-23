#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	long long int t[n];
	double v[n];
	for(i=0;i<n;i++){
		scanf("%lld %lf",&t[i],&v[i]);
	}
	double mol;
	double sum=0;
	for(i=1;i<n;i++){
		mol=((v[i]+v[i-1])/2)*(t[i]-t[i-1]);
		sum+=mol;
	}
	printf("%lf\n",sum/1000);
	
	return 0;
}
