#include<stdio.h>

int main(){
	int n,i,b;
	double p,abp,bpm,mbp;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %lf",&b,&p);
		bpm=b*60/p;
		abp=(b-1)*60/p;
		mbp=(b+1)*60/p;
		printf("%.4lf %.4lf %.4lf\n",abp,bpm,mbp);
	}
	return 0;
}
