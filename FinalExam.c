#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	char score[n];
	for(i=0;i<n;i++){
		scanf("%s",&score[i]);
		getchar();
	}
	
	int count=0;
	for(i=0;i<n-1;i++){
		if(score[i]==score[i+1]) count++;
	}
	
	printf("%d\n",count);
	
	return 0;
}
