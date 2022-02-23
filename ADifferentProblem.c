#include<stdio.h>

int main(){
	long long int m,n,v;
	
	while(scanf("%lld %lld",&m,&n)!=EOF){
		if(m>n){
			v=m-n;
		}
		if(n>=m){
			v=n-m;
		}
		printf("%lld\n",v);
	}
	return 0;
}
