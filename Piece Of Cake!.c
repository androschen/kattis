#include<stdio.h>

int main(){
	
	int n,h,v,h1,v1;
	float m;
	
	scanf("%d %d %d",&n,&h,&v);
	h1=n-h;
	v1=n-v;
	m=(float)1/2*n;
	if(h<=m&&v>m){
		printf("%d\n",4*h1*v);
	}	
	if(h>m&&v<=m){
		printf("%d\n",4*h*v1);
	}
	if(h<=m&&v<=m){
		printf("%d\n",4*h1*v1);
	}
	if(h>m&&v>m){
		printf("%d\n",4*h*v);
	}
	return 0;
}
