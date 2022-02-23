#include<stdio.h>
#include<string.h>

int main(){
	char kata1[1000];
	char kata2[1000];
	int i;
	
	scanf("%s",&kata1);
	scanf("%s",&kata2);
	int len1=strlen(kata1);
	int len2=strlen(kata2);
	int count1=0;
	int count2=0;
	for(i=0;i<len1;i++){	
		if(kata1[i]=='a'){
			count1++;
		}
	}
	
	for(i=0;i<len2;i++){	
		if(kata2[i]=='a'){
			count2++;
		}
	}
	if(count2>count1){
		printf("no\n");
	}
	if(count1>=count2){
		printf("go\n");
	}
	return 0;
}
