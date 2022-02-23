#include<stdio.h>

int harshad(int n){
	int h=n;
	int sum=0;
	
	while(h>0){
		int temp=h;
		temp=h%10;
		h/=10;
		sum+=temp;
	}
	if(n%sum==0){
		return n;
	}
	if(n%sum!=0){
		return harshad(n+1);
	}
}
int main(){
	int n,sum=0,h;
	
	scanf("%d",&n);
	
	printf("%d\n",harshad(n));
	
	return 0;
}
