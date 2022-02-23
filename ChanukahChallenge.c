#include<stdio.h>

int main(){
	int t,k,n,i,j;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&k,&n);
		int lilin=0;
		for(j=1;j<=n;j++){
			lilin+=j;
		}
		printf("%d %d\n",k,lilin+n);
	}
	return 0;
}
