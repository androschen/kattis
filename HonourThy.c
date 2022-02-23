#include<stdio.h>
#include<string.h>

int main(){
	char y[11];
	char p[11];
	
	scanf("%s %s",&y,&p);
	getchar();
	int len=strlen(y);
	if(y[len-1]=='a'||y[len-1]=='i'||y[len-1]=='u'||y[len-1]=='e'||y[len-1]=='o'){
		y[len-1]='e';
		printf("%sx%s\n",y,p);
	}
	else if(y[len-2]=='e'&&y[len-1]=='x'){
		printf("%s%s\n",y,p);
	}
	else{
		printf("%sex%s\n",y,p);
	}
	return 0;
}
