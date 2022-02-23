#include<stdio.h>

int main(){
	int t,i;
	
	scanf("%d",&t);
	int turtle;
	for(i=0;i<t;i++){
		int imigran=0;
		int count=0;
		int real;
		scanf("%d",&real);
		while(1){
			scanf("%d",&turtle);
			if(turtle==0){
				break;
			}
			if(turtle>2*real){
				imigran+=turtle-2*real;
			}
			real=turtle;
		}
		printf("%d\n",imigran);	
	}
	return 0;
}
