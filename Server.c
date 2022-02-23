#include<stdio.h>

int main(){
	int n,t,i,task;
	
	scanf("%d %d",&n,&t);
	int sum=0;
	int count=0;
	for(i=0;i<n;i++){
		scanf("%d",&task);
		sum+=task;
		if(sum>t){
			break;
		}
		count++;
	}
	printf("%d\n",count);
	
	return 0;
}
