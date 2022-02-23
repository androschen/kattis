#include<stdio.h>

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	int arr[n];
	int max=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>max) max=arr[i];
	}
	int x=0;
	for(i=1;i<max;i++){
		for(j=0;j<n;j++){
			if(i==arr[j]) break;
			
			if(j==n-1){
				x=1;
				printf("%d\n",i);
			}
		}
	}
	if(x==0){
		printf("good job\n");
	}
	return 0;
}
