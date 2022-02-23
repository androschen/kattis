#include<stdio.h>

int main(){
	int c,n,i,j;
	double avg;
	
	scanf("%d",&c);
	for(i=0;i<c;i++){
		scanf("%d",&n);
		double sum=0;
		double nilai[n];
		for(j=0;j<n;j++){
			scanf("%lf",&nilai[j]);
			sum+=nilai[j];
		}
		avg=sum/n;
		double count=0;
		for(j=0;j<n;j++){
			if(nilai[j]>avg){
				count++;
			}
		}
		printf("%.3lf%%\n",count*100/n);
	}
	return 0;
}
