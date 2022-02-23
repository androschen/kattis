#include<stdio.h>
#include<string.h>

int main(){
	int i,a=0,b=0;
	char score[201];
	
	scanf("%s",&score);
	int len=strlen(score);
	for(i=0;i<len;i++){
		if(score[i]=='A'){
			if(score[i+1]=='1'){
				a++;
			}
			if(score[i+1]=='2'){
				a+=2;
			}
		}
		if(score[i]=='B'){
			if(score[i+1]=='1'){
				b++;
			}
			if(score[i+1]=='2'){
				b+=2;
			}
		}
	}
	if(a>b){
		printf("A\n");
	}
	if(b>a){
		printf("B\n");
	}
	
	return 0;
}
