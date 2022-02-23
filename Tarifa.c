#include<stdio.h>

int main(){
	int x,n,i;
	
	scanf("%d",&x);
	scanf("%d",&n);
	int p[n];
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
		sum+=p[i];
	}
	int hasil=(x*n)-sum+x;
	
	printf("%d\n",hasil);
	return 0;
}
