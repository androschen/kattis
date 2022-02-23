#include<stdio.h>

int main(){
	int t,n,i,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		int store[n];
		int max=0;
		int min=100;
		for(j=0;j<n;j++){
			scanf("%d",&store[j]);
			if(store[j]>max){
				max=store[j];
			}
			if(store[j]<min){
				min=store[j];
			}
		}
		int distance=max-min;
		
		printf("%d\n",distance*2);
	}
	return 0;
}
