#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j,k;
	char kata[100];
	
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		scanf("%[^\n]",&kata);
		getchar();
		int len=strlen(kata);
		if(kata[0]=='S'&&kata[1]=='i'&&kata[2]=='m'&&kata[3]=='o'&&kata[4]=='n'&&kata[5]==' '&&kata[6]=='s'&&kata[7]=='a'&&kata[8]=='y'&&kata[9]=='s'){
			for(j=10;j<len;j++){
				printf("%c",kata[j]);
			}
		}
		else{
			continue;
		}
		printf("\n");
	}
	return 0;
}
