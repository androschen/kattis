#include<stdio.h>

int main(){
	
	char c[100];
	int len,i;
	
	scanf("%s",&c);
	getchar();
	len=strlen(c);
	printf("%c",c[0]);
	for(i=0;i<len;i++){
		if(c[i-1]=='-'){
			printf("%c",c[i]);
		}
	}
	printf("\n");
	
	return 0;
}
