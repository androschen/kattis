#include<stdio.h>

int main(){
	int n,i;

	scanf("%d",&n);
	int k;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k<0) sum+=k;
	}
	printf("%d\n",(sum-2*sum));
}
