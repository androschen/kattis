#include<stdio.h>

int main(){
	int t,i;
	double a,b,c;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lf %lf %lf",&a,&b,&c);
		if(a*b==c||a/b==c||b/a==c||a+b==c||a-b==c||b-a==c){
			printf("Possible\n");
		}
		else{
			printf("Impossible\n");
		}
	}
	return 0;
}
