#include<stdio.h>
#include<string.h>

int main(){
	char s[1001];
	int i;
	
	scanf("%s",&s);
	getchar();
	int len=strlen(s);
	int sum=0;
	int alfa[27]={0};
	int index;
	for(i=0;i<len;i++){
		index=s[i]-97;
		alfa[index]++;
	}
	for(i=0;i<26;i++){
		if(alfa[i]%2!=0){
			sum++;
		}
	}
	if(sum==0){
		printf("0\n");
	}
	else{
		printf("%d\n",sum-1);
	}	
	
	return 0;
}
