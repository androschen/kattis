#include<stdio.h>

int main(){
	int botol,k,tuker,sisa,botolbaru,minum,botolsisa;
	int haus=0;
	
	scanf("%d %d %d",&botol,&k,&tuker);
	
	botolsisa=botol+k;
	while(botolsisa>=tuker){
		minum=botolsisa/tuker;
		sisa=botolsisa-minum*tuker;
		haus+=minum;
		botolsisa=minum+sisa;
	}
	printf("%d\n",haus);
	
	return 0;
}
