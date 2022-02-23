#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j,k;
	char op[15];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&op);
		getchar();
		int len=strlen(op);
		for(j=0;j<len;j++){
		char numa[5]={0},numb[5]={0};
			int a=0,b=0;
			int indexa=0;
			int indexb=0;
			if(op[j]=='='){
				printf("skipped\n");
				break;
			}
			if(op[j]=='+'){
				int batas=j;
				for(k=0;k<batas;k++){
					numa[indexa]=op[k];
					indexa++;
				}
				for(k=batas+1;k<len;k++){
					numb[indexb]=op[k];
					indexb++;
				}
				a=atoi(numa);
				b=atoi(numb);
				printf("%d\n",a+b);
				break;
			}
		}
	}
	return 0;
}
