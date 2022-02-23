#include<stdio.h>

int main(){
	int x,y;
	
	scanf("%d %d",&x,&y);
	
	if(y%2==0){
		printf("possible\n");
	}
	else{
		printf("impossible\n");
	}
	return 0;
}
