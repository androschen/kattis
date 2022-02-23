#include<stdio.h>

int main(){
	int g,s,c;
	
	scanf("%d %d %d",&g,&s,&c);
	int money=g*3+s*2+c*1;
	
	if(money>1){
		if(money>7){
			printf("Province");		
		}
		else if(money>4){
			printf("Duchy");
		}
		else if(money>1){
			printf("Estate");
		}
		printf(" or ");
	}
	if(money>5){
		printf("Gold\n");
	}
	else if(money>2){
		printf("Silver\n");
	}
	else if(money>=0){
		printf("Copper\n");
	}
	
	return 0;
}
