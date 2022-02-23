#include<stdio.h>

int main(){
	double r,c,luasr,luasc;
	double pi=3.14159265358;
	double hasil;
	
	scanf("%lf %lf",&r,&c);
	int keju=r-c;
	luasr=pi*r*r;
	luasc=pi*keju*keju;
	hasil=luasc/luasr;
	
	printf("%lf\n",hasil*100);
	return 0;
}

