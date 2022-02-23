#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n,i,j,k;
	char s[10001];
	char mtx[101][101];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&s);
		int len=strlen(s);
		int akar=ceil(sqrt(len));
		int m=akar*akar;
		for(j=len;j<m;j++){
			s[j]='*';
		}
		int l=0;
		for(j=0;j<akar;j++){
			for(k=0;k<akar;k++){
				mtx[j][k]=s[l];
				l++;
			}
		}
		for(j=0;j<akar;j++){
			for(k=akar-1;k>=0;k--){
				if(mtx[k][j]!='*'){
				printf("%c",mtx[k][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
