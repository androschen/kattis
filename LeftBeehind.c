#include<stdio.h>

int main(){
	int x,y;
	
	while(1){
		scanf("%d %d",&x,&y);
		if(x==0&&y==0){
			break;
		}	
		if(x+y==13){
			printf("Never speak again.\n");
		}
		else if(x>y){
			printf("To the convention.\n");
		}
		else if(y>x){
			printf("Left beehind.\n");
		}
		else if(y==x){
			printf("Undecided.\n");
		}
	}
	return 0;
}
