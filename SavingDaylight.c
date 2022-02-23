#include<stdio.h>


int main(){
	char month[11];
	int date,year,h1,m1,h2,m2;
	
	while(scanf("%s %d %d %d:%d %d:%d",&month,&date,&year,&h1,&m1,&h2,&m2)!=EOF){
		int hour=h2-h1;
		int minute=m2-m1;
		if(minute<0){
			minute+=60;
			hour-=1;
		}
		printf("%s %d %d %d hours %d minutes\n",month,date,year,hour,minute);
	}
	return 0;
}
