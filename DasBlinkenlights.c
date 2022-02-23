#include<stdio.h>

int main(){
	int p,q,s,i;
	int count=0;
	
	scanf("%d %d %d",&p,&q,&s);
	int sump=p;
	int sumq=q;
	for(i=1;i<=s;i++){
		if(sump==sumq&&sump<=s&&sumq<=s){
			count++;
		}
		if(i==sump){
			sump+=p;
		}
		if(i==sumq){
			sumq+=q;
		}
	}
	if(count>0){
		printf("yes\n");
	}
	if(count==0){
		printf("no\n");
	}
	return 0;
}
