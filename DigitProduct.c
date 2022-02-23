#include<stdio.h>

int main(){
	int x,s,mod,kali;
	
	scanf("%d",&x);
	s=x;
	do{
		kali=1;
		while(s>0){
			mod=s%10;
			if(mod!=0){
				kali=kali*mod;
			}
			s/=10;
		}
		s=kali;
	}while(kali>9);
	printf("%d\n",s);
	return 0;
}
