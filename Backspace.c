#include<stdio.h>
#include<string.h>

int main(){
	int i,j;
	char s[1000001];
	char temp[1000001];
	
	scanf("%s",&s);
	int len=strlen(s);
	int index=0;
	for(i=0;i<len;i++){
		if(s[i]=='<'){
			index--;
		}
		else{
			temp[index]=s[i];
			index++;
		}
	}
	for(i=0;i<index;i++){
		printf("%c",temp[i]);	
	}
	printf("\n");
	return 0;
}
