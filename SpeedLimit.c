#include<stdio.h>

int main(){
	int n,i,mil1,mil;
	while(1){
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		int s[n],t[n];
		for(i=0;i<n;i++){
			scanf("%d %d",&s[i],&t[i]);
		}
		mil1=s[0]*t[0];
		int sum=+mil1;
		for(i=1;i<n;i++){
			mil=(t[i]-t[i-1])*s[i];
			sum+=mil;
		}
		printf("%d miles\n",sum);
	}
	return 0;
}
