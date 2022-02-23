#include<stdio.h>

int main(){
	int n,min,i,j;
	
	scanf("%d",&n);
	long long int sampah[n];
	for(i=0;i<n;i++){
		scanf("%lld",&sampah[i]);
	}
	min=sampah[0];
	for(i=0;i<n;i++){
		if(sampah[i]<min){
			min=sampah[i];
			j=i;
		}		
	}
	printf("%d\n",j);
	return 0;
}
