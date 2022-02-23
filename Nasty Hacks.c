#include<stdio.h>

int main(){
	
	int n,r,e,c,i,a;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&r,&e,&c);
		a=e-c;
		if(r<a){
			printf("advertise\n");
		}
		else if(r==a){
			printf("does not matter\n");
		}
		else if(r>a){
			printf("do not advertise\n");
		}
	}
	return 0;
}
