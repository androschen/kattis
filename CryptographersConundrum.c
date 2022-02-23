#include<stdio.h>
#include<string.h>

int main(){
	char s[301];
	int i;
	
	scanf("%s",&s);
	int len=strlen(s);
	int count=0;
	for(i=0;i<len;i+=3){
		if(s[i]!='P'){
			count++;
		}
	}
	for(i=1;i<len;i+=3){
		if(s[i]!='E') count++;
	}
	for(i=2;i<len;i+=3){
		if(s[i]!='R') count++;
	}
	printf("%d\n",count);
	
	return 0;
}
