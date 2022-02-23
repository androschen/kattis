#include<stdio.h>

int main(){
	
	int n,t,i;
	
	scanf("%d",&n);
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&t);
		if(t<0){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
