#include<stdio.h>

int main(){
	int n,i,j,g,k;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&g);
		int c[g];
		int temp[501]={0};
		for(j=0;j<g;j++){
			scanf("%d",&c[j]);
		}
		int index=0;
		for(j=0;j<g;j++){
			for(k=0;k<g;k++){
				if(c[j]==temp[k]) break;
				if(k==g-1){
					temp[index]=c[j];
					index++;
				}
			}
		}
	
		int count[501]={0};
		int solo;
		for(j=0;j<index;j++){
			for(k=0;k<g;k++){
				if(temp[j]==c[k]) count[j]++;
			}
		}
		for(j=0;j<index;j++){
			if(count[j]==1){
				solo=temp[j];
			}
		}
		printf("Case #%d: %d\n",i+1,solo);
	}
	return 0;
}
