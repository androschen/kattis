#include<stdio.h>

int main(){
	int l,r,tine,gigi;
	
	scanf("%d %d",&l,&r);
	if(l==0&&r==0){
		printf("Not a moose\n");
	}	
	if(l==0&&r!=0||l!=0&&r==0||r!=0&&r!=0){
		if(l>r){
			tine=l+l;
		}
		if(r>=l){
			tine=r+r;
		}
		gigi=l+r;
		if(gigi==tine){
			printf("Even %d\n",tine);
		}
		else{
			printf("Odd %d\n",tine);
		}
	}
	return 0;
}
