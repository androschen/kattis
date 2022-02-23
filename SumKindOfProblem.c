#include<stdio.h>

int main(){
	int p,n,i,k,j;

	scanf("%d",&p);
	for(i=0;i<p;i++){
	long long int sum=0,ganjil=0,genap=0;
		scanf("%d %d",&k,&n);
		for(j=1;j<=n;j++){
			sum+=j;
		}
		for(j=1;j<=2*n;j+=2){
			ganjil+=j;
		}
		for(j=0;j<=2*n;j+=2){
			genap+=j;
		}
	printf("%d %lld %lld %lld\n",i+1,sum,ganjil,genap);
	}
	return 0;
}
