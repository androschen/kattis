#include<stdio.h>
#include<math.h>

int main(){
	int n,i;
	double vo,x1,teta,h1,h2;
	double g=9.81;
	double pi=3.14159265359;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf",&vo,&teta,&x1,&h1,&h2);
		double t=x1/(vo*cos(teta*pi/180));
		double y=vo*t*sin(teta*pi/180)-(0.5*g*pow(t,2));
		
		if(y-h1>=1&&h2-y>=1){
			printf("Safe\n");
		}
		else{
			printf("Not Safe\n");
		}
	}
	return 0;
}
