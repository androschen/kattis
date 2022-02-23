#include<stdio.h>

int main(){
	double x,lr,up,koma,down;
	
	scanf("%lf",&x);
	lr=x*1000*5280/4854;
	up=ceil(lr);
	down=floor(lr);
	koma=up-lr;
	if(koma>0.6){
		printf("%.lf\n",down);		
	}
	else{
		printf("%.lf\n",up);
	}
	
	return 0;
}
