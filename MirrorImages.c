#include<stdio.h>

int main(){
	int t,r,i,c,j,k;
	
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++){
		scanf("%d %d",&r,&c);
		getchar();
		char arr[r+1][c+1];
		for(j=0;j<r;j++){
			scanf("%s",&arr[j]);
		}
		printf("Test %d\n",i+1);
		for(j=r-1;j>=0;j--){
			for(k=c-1;k>=0;k--){
				printf("%c",arr[j][k]);
			}
			printf("\n");
		}
	}
	return 0;
}

