#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	char s[51];
	char s2[51];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&s);
		scanf("%s",&s2);
		int len=strlen(s);
		printf("%s\n",s);
		printf("%s\n",s2);
		for(j=0;j<len;j++){
			if(s[j]!=s2[j]){
				printf("*");
			}
			if(s[j]==s2[j]){
				printf(".");
			}
		}
		printf("\n\n");
	}
	return 0;
}
