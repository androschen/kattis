#include<stdio.h>

int main(){
	int n,count=0,i;
	double b,sum=0;
	double hasil;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&b);
		if(b>=0){
			count++;
			sum+=b;
		}
	}
	hasil=sum/count;
	printf("%lf\n",hasil);
	return 0;
}
