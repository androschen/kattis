#include<stdio.h>

int main(){
	int n,m,p,q;
	
	scanf("%d %d",&n,&m);
	if(m>n){
		p=m-n;
		if(p==1){
			printf("Dr. Chaz will have %d piece of chicken left over!\n",p);
		}
		else{
			printf("Dr. Chaz will have %d pieces of chicken left over!\n",m-n);
		}
	}
	else if(n>m){
		q=n-m;
		if(q==1){
			printf("Dr. Chaz needs %d more piece of chicken!\n",q);
		}
		else{
			printf("Dr. Chaz needs %d more pieces of chicken!\n",q);
		}
	}
	return 0;
}
