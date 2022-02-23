#include<stdio.h>

int main(){
	int i,j;
	
	int n[11];
	int x[11];
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
		x[i]=(n[i]%42)+1;
	}
	
	int temp[11]={0};
	int index=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(x[i]==temp[j]) break;
			if(j==9){
				temp[index]=x[i];
				index++;
			}
		}
	}	
	printf("%d\n",index);
	return 0;
}
