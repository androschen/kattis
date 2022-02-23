#include<stdio.h>

int main(){
	int k,q,r,b,kn,p;
	int countk=0,countq=0,countr=0,countb=0,countkn=0,countp=0;
	
	scanf("%d %d %d %d %d %d",&k,&q,&r,&b,&kn,&p);
	if(k==0){
		countk+=1;
	}
	while(k>1){
		k--;
		countk--;
	}
	if(q==0){
		countq++;
	}
	while(q>1){
		q--;
		countq--;
	}
	while(r<2){
		r++;
		countr++;
	}
	while(r>2){
		r--;
		countr--;
	}
	while(b<2){
		b++;
		countb++;
	}
	while(b>2){
		b--;
		countb--;
	}
	while(kn<2){
		kn++;
		countkn++;
	}
	while(kn>2){
		kn--;
		countkn--;
	}
	while(p<8){
		p++;
		countp++;
	}
	while(p>8){
		p--;
		countp--;
	}
	printf("%d %d %d %d %d %d\n",countk,countq,countr,countb,countkn,countp);
}
