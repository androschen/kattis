#include<stdio.h>

int main(){
	int n,i,j;
	int count=0,count2=0;
	
	scanf("%d",&n);
	char nama[n][12];
	for(i=0;i<n;i++){
		scanf("%s",&nama[i]);
	}
	for(i=0;i<n-1;i++){
	int index=0;
		while(nama[i][index]==nama[i+1][index]){
			index++;
		}
		if(nama[i][index]>nama[i+1][index]){
			count++;
		}
		if(nama[i][index]<nama[i+1][index]){
			count2++;
		}
	}
	if(count==n-1){
		printf("DECREASING\n");
	}
	if(count2==n-1){
		printf("INCREASING\n");
	}
	if(count!=n-1&&count2!=n-1){
		printf("NEITHER\n");
	}
	return 0;
}
