#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int i,point;
	char s[50];
	int countt=0;
	int countg=0;
	int countc=0;
	
	scanf("%s",&s);
	int len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]=='T') countt++;
		if(s[i]=='G') countg++;
		if(s[i]=='C') countc++;
	}
	point=pow(countt,2)+pow(countg,2)+pow(countc,2);
	while(countt>0&&countg>0&&countc>0){
		point+=7;
		countt--;
		countg--;
		countc--;
	}
	printf("%d\n",point);
	
	return 0;
}
