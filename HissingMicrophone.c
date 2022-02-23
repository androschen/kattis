#include<stdio.h>

int main(){
	char s[30];
	int i,len,j;
	
	scanf("%s",&s);
	getchar();
	len=strlen(s);
	int n=0;
	for(i=0;i<len;i++){
		if(s[i]=='s'){
			if(s[i+1]=='s'){
				printf("hiss\n");
				return 0;
			}
			if(i==len-1){
				printf("no hiss\n");
			}
		}
		if(s[i]!='s'){
			if(i==len-1){	
				printf("no hiss\n");
			}
		}
	}
	
	return 0;
}
