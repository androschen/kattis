#include<stdio.h>

int main(){
	int i,pem,pen,bagi,mod;
	
	while(scanf("%d %d",&pem,&pen)){
		if(pem==0&&pen==0){
			break;
		}
		bagi=pem/pen;
		mod=pem%pen;
		
		printf("%d %d / %d\n",bagi,mod,pen);
	}
	return 0;
}
