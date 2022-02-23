#include<stdio.h>

int main(){
	int r,n,i;
	
	scanf("%d %d",&r,&n);
	int no[101]={0};
	int room;
	for(i=0;i<n;i++){
		scanf("%d",&room);
		no[room]=1;
	}	
	if(r==n){
		printf("too late\n");
	}
	for(i=1;i<=r;i++){
		if(no[i]==0){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
