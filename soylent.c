#include<stdio.h>
#include<math.h>

int main(){
	int t,i;
	float n,botol;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%f",&n);
		botol=n/400;
		float botols=ceil(botol);
		printf("%.f\n",botols);
	}
	return 0;
}
