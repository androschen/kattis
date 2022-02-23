#include<stdio.h>

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		char s[101];
		scanf("%[^\n]",&s);
		getchar();
		int len=strlen(s);
		int alfa[27]={0};
		int index;
		for(j=0;j<len;j++){
			if(s[j]>='a'&&s[j]<='z'){
				index=s[j]-97;
				alfa[index]=1;
			}
			if(s[j]>='A'&&s[j]<='Z'){
				index=s[j]-65;
				alfa[index]=1;
			}
		}
		int x=0;
		for(j=0;j<26;j++){
			if(alfa[j]==0){
				x=1;
				break;
			}
			if(j==25){
				printf("pangram\n");
			}
		}
		if(x==1){
			printf("missing ");
			for(j=0;j<26;j++){
				if(alfa[j]==0){
					printf("%c",j+97);
				}		
			}
			printf("\n");
		}
	}
	return 0;
}
