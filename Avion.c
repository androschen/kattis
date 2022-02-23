#include<stdio.h>

int main(){
	int i,j,fbi=0;
	char kata[11];
	
	for(i=0;i<5;i++){
		scanf("%s",&kata);
		getchar();
		int len=strlen(kata);
		for(j=0;j<len;j++){
			if(kata[j]=='F'&&kata[j+1]=='B'&&kata[j+2]=='I'){
				fbi++;
				printf("%d\n",i+1);
			}
		}
	}
	if(fbi==0){
		printf("HE GOT AWAY!\n");
	}
	return 0;
}
