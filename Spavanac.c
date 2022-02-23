#include<stdio.h>

int main(){
	int h,m,total,jam,menit;
	
	scanf("%d %d",&h,&m);
	if(h==0) h=24;	
	
	total=(60*h)+m-45;
	jam=total/60;
	menit=total%60;
	
	printf("%d %d\n",jam,menit);	
	return 0;
}
