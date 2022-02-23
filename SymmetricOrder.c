#include<stdio.h>

struct nama{
	char name[27];
};
int main(){
	int n,i,set=0;
	
	while(1){
		set++;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		struct nama x[n],s[n];
		for(i=0;i<n;i++){
			scanf("%s",&x[i].name);
		}
		printf("SET %d\n",set);
		for(i=0;i<n;i++){
			if((i+1)%2==1){
				printf("%s\n",x[i].name);
			}
		}
		for(i=n-1;i>=0;i--){
			if((i-1)%2==0){
				printf("%s\n",x[i].name);		
			}
		}
	}
	return 0;
}
