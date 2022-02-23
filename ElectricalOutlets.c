#include<stdio.h>

int main(){
	int n,i,j,k;
	int soket[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		int sum=0;
		for(j=0;j<k;j++){
			scanf("%d",&soket[j]);
			if(j!=k-1){
				soket[j]--;
			}
			sum+=soket[j];
		}
		printf("%d\n",sum);
	}
	return 0;
}
