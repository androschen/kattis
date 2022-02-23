#include<stdio.h>

int main(){
	int l,d,x,n,m,i;
	
	scanf("%d",&l);
	scanf("%d",&d);
	scanf("%d",&x);
	int mod;
	for(i=l;i<=d;i++){
		int total=0;
		int temp=i;
		while(temp>0){
			mod=temp%10;
			total+=mod;
			temp/=10;
		}
		if(total==x){
			printf("%d\n",i);
			break;
		}
	}
	for(i=d;i>=l;i--){
		int total=0;
		int temp=i;
		while(temp>0){
			mod=temp%10;
			total+=mod;
			temp/=10;
		}
		if(total==x){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
