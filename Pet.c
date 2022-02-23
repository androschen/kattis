#include<stdio.h>

int main(){
	int a,b,c,d,i;
	int high=0;
	int sum[5];
	int rank;
	
	for(i=0;i<5;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		sum[i]=a+b+c+d;
		if(sum[i]>high){
			high=sum[i];
			rank=i+1;
		}
	}
	printf("%d %d\n",rank,high);
	return 0;
}
