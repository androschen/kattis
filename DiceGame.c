#include<stdio.h>

int main(){
	int a1,a2,a3,a4;
	int b1,b2,b3,b4;
	
	int sumg=0;
	int sume=0;
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	sumg+=(a1+a2+a3+a4);
	scanf("%d %d %d %d",&b1,&b2,&b3,&b4);
	sume+=(b1+b2+b3+b4);	
	
	if(sumg>sume){
		printf("Gunnar\n");
	}
	if(sumg<sume){
		printf("Emma\n");
	}
	if(sumg==sume){
		printf("Tie\n");
	}
	
	return 0;
}
