#include<stdio.h>

int main(){
	int l,x,i;
	
	scanf("%d %d",&l,&x);
	int kel[x];
	char s[x][6];
	int sum=0;
	for(i=0;i<x;i++){
		scanf("%s %d",&s[i],&kel[i]);
		getchar();
	}
	int count=0;
	for(i=0;i<x;i++){
		if(s[i][0]=='e'){
			sum+=kel[i];
			if(sum>l){
				sum-=kel[i];
				count++;
			}
		}
		if(s[i][0]=='l'){
			sum-=kel[i];
		}
	}
	printf("%d\n",count);
	return 0;
}
