#include<stdio.h>
#include<string.h>

int main(){
	char s[51];
	int i,tempat=1;
	
	scanf("%s",&s);
	int len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]=='A'){
			if(tempat==1){
				tempat=2;	
			}
			else if(tempat==2){
				tempat=1;	
			}
		}
		if(s[i]=='B'){
			if(tempat==2){
				tempat=3;	
			}
			else if(tempat==3){
				tempat=2;	
			}
		}
		if(s[i]=='C'){
			if(tempat==1){
				tempat=3;	
			}
			else if(tempat==3){
				tempat=1;	
			}
		}
	}
	printf("%d\n",tempat);
	
	return 0;
}
