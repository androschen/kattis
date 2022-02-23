#include<stdio.h>

int main(){
	int n,m,i;
	
	scanf("%d %d",&n,&m);
	int max=n;
	int min=m;
	if(m>max){
		max=m;
		min=n;
	}
	for(i=min+1;i<=max+1;i++){
		printf("%d\n",i);
	}
	return 0;
}
