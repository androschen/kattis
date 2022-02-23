#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,i,j,k;
	char kata[10001];
	char x[101][101];
	char benar[10001];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",kata);
		getchar();
		int len= strlen(kata);
		int sisi=sqrt(len);
		int h=0;
		for(j=0;j<sisi;j++){
			int index=0;
			while(h<len){
				x[j][index]=kata[h];
				if((h+1)%sisi==0){
					break;
				}
				index++;
				h++;
			}
			h++;
		}
		int index2=0;
		for(j=sisi-1;j>=0;j--){
			for(k=0;k<sisi;k++){
				benar[index2]=x[k][j];
				index2++;
			}
		}
		for(j=0;j<index2;j++){		
			printf("%c",benar[j]);
		}
		printf("\n");
	}
	return 0;
}
