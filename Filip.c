#include<stdio.h>

int main(){
	int a,b,p,ra,rb,i;
	
	scanf("%d %d",&a,&b);
	int sementaraa=a;
	int sementarab=b;
	do{
		ra=sementaraa%10;
		rb=sementarab%10;
		sementaraa/=10;
		sementarab/=10;
	}while(ra==rb);
	
	int tempa=0;
	int tempb=0;
	if(ra>rb){
		while (a>0){
			tempa*=10;
			tempa+=(a%10);
			a/=10;
		}
		printf("%d",tempa);
	}
	if(rb>ra){
		while (b>0){
			tempb*=10;
			tempb+=(b%10);
			b/=10;
		}
		printf("%d",tempb);
	}
	return 0;
}
