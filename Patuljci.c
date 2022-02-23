#include<stdio.h>

int main(){
	int x[11]={0},i,j;
	
	int sum=0;
	for(i=0;i<9;i++){
		scanf("%d",&x[i]);
		sum+=x[i];
	}
	int dwarves;
	int check=0;
	int intrude1;
	int intrude2;
	for(i=0;i<9;i++){
		for(j=1;j<9;j++){
			dwarves=sum-x[i]-x[j];
			if(dwarves==100){
				intrude1=i;
				intrude2=j;
				check=1;
				break;
			}
		}
		if(check==1) break;
	}
	for(i=0;i<9;i++){
		if(i==intrude1||i==intrude2) continue;
		else{
			printf("%d\n",x[i]);
		}
	}
	return 0;
}
