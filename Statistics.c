#include<stdio.h>

int main(){
	int i,n,x=1;
	
	while(scanf("%d",&n)!=EOF){
		int min=1000000;
		int max=-1000000;
		int arr[n];
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
			if(arr[i]>max){
				max=arr[i];
			}
			if(arr[i]<min){
				min=arr[i];
			}
		}	
		printf("Case %d: %d %d %d\n",x,min,max,max-min);	
		x++;
	}
	return 0;
}
