#include<stdio.h>

int main(){
	
	int x,y,n,i;
	scanf("%d %d %d",&x,&y,&n);
	for(i=1;i<=n;i++){
		if(i%x!=0&&i%y!=0){
			printf("%d\n",i);
		}
		if(i%x==0&&i%y!=0){
			printf("Fizz\n");
		}
		if(i%y==0&&i%x!=0){
			printf("Buzz\n");
		}
		if(i%x==0&&i%y==0){
			printf("FizzBuzz\n");
		}
	}
	return 0;
}
