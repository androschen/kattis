#include<stdio.h>

struct university{
	char univ[21];
	char team[21];
};

int main(){
	int n,i,j;
	
	scanf("%d",&n);
	struct university u[n];
	for(i=0;i<n;i++){
		scanf("%s %s",&u[i].univ,&u[i].team);
		getchar();
	}
	char winner[n][21];
	int index=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(strcmp(u[i].univ,winner[j])==0){
				break;
			}
			if(j==n-1){
				strcpy(winner[index],u[i].univ);
				index++;
			}
		}
	}

	for(i=0;i<12;i++){
		for(j=0;j<n;j++){
			if(strcmp(u[j].univ,winner[i])==0){
				printf("%s %s\n",u[j].univ,u[j].team);	
				break;	
			}
		}
	}
	
	return 0;
}
