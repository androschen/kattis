#include<stdio.h>

int main(){
	int n,W,L,i;
	
	scanf("%d",&W);
	scanf("%d",&n);
	int w,l;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&w,&l);
		sum+=(w*l);
	}
	L=sum/W;
	
	printf("%d\n",L);
	
	return 0;
}
