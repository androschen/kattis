#include<stdio.h>

int main(){
	int i,t,x,angka,pangkat,hasil;
	
	scanf("%d",&t);
	int sum=0;
	for(i=0;i<t;i++){
		scanf("%d",&x);
		angka=x/10;
		pangkat=x%10;
		hasil=pow(angka,pangkat);
		sum+=hasil;
	}
	printf("%d\n",sum);
	return 0;
}
