#include<stdio.h>
#include<string.h>

int main(){
	char mon[5];
	int tgl;
	
	scanf("%s %d",&mon,&tgl);
	if(strcmp(mon,"OCT")==0&&tgl==31||strcmp(mon,"DEC")==0&&tgl==25){
		printf("yup\n");
	}
	else{
		printf("nope\n");
	}
	return 0;
}
