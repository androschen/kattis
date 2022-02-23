#include<stdio.h>

int main(){
	char s[5][3];
	int i,j;
	
	for(i=0;i<5;i++){
		scanf("%s",&s[i]);
	}
	int power=0;
	for(i=0;i<5;i++){
		int sum=0;
		for(j=0;j<5;j++){
			if(s[i][0]==s[j][0]) sum++;
		}
		if(sum>power){
			power=sum;
		}
	}
	printf("%d\n",power);
	return 0;
}
