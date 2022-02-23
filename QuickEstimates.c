#include<stdio.h>
#include<string.h>

int main(){
	char digit[100];
	int n,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&digit);
		int len=strlen(digit);
		
		printf("%d\n",len);
	}
	return 0;
}
