#include<stdio.h>
#include<string.h>

int main(){
	char x[251];
	char temp[251];
	int i,j;
	
	scanf("%s",&x);
	int len=strlen(x);
	int index=0;
	for(i=0;i<len;i++){
		if(x[i]!=x[i+1]){
			temp[index]=x[i];
			index++;
		}
	}
	for(i=0;i<index;i++){
		printf("%c",temp[i]);
	}
	printf("\n");
	
	return 0;
}
