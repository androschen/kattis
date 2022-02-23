#include<stdio.h>

int main(){
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	int kiri=b-a-1;
	int kanan=c-b-1;
	
	if(kiri>kanan){
		printf("%d\n",kiri);
	}
	else{
		printf("%d\n",kanan);
	}
	return 0;
}
