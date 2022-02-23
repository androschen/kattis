#include<stdio.h>

int main(){
	int r,c,i,j;
	
	scanf("%d %d",&r,&c);
	getchar();
	char car[r+1][c+1];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%c",&car[i][j]);
		}
		getchar();
	}
	int count[5]={0};
	for(i=0;i<r-1;i++){
		for(j=0;j<c-1;j++){
			int n=0;
			if(car[i][j]=='#'||car[i+1][j]=='#'||car[i][j+1]=='#'||car[i+1][j+1]=='#'){
				continue;
			}
			if(car[i][j]=='X') n++;
			if(car[i+1][j]=='X') n++;
			if(car[i][j+1]=='X') n++;
			if(car[i+1][j+1]=='X') n++;
			count[n]++;
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",count[i]);
	}
	return 0;
}
