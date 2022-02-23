#include<stdio.h>

int f(int n){
	if(n==1){
		return n;
	}
	else{
		return n*f(n-1);
	}
}

int main(){
	int t,n,i,fact;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		fact=f(n);
		printf("%d\n",fact%10);
	}
}
