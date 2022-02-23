#include<stdio.h>
#include<string.h>

int main(){
	int i,count=0;
	char kata[1001];
	

	scanf("%s",&kata);
	int len=strlen(kata);
	for(i=0;i<len;i++){
		if(kata[i]=='e'){
			count++;
		}
	}
	printf("h");
	for(i=0;i<2*count;i++){
		printf("e");
	}
	printf("y\n");
	
	return 0;
}
