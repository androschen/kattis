#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	char kata[31];
	int count =0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&kata);
		getchar();
		int len=strlen(kata);
		for(j=0;j<len;j++){
			if(kata[j]=='r'||kata[j]=='R'){
				if(kata[j+1]=='o'||kata[j+1]=='O'){
					if(kata[j+2]=='s'||kata[j+2]=='S'){
						if(kata[j+3]=='e'||kata[j+3]=='E'){
							count++;	
							break;
						}
					}
				}
			}
			if(kata[j]=='p'||kata[j]=='P'){
				if(kata[j+1]=='i'||kata[j+1]=='I'){
					if(kata[j+2]=='n'||kata[j+2]=='N'){
						if(kata[j+3]=='k'||kata[j+3]=='K'){
							count++;
							break;
						}
					}
				}
			}
		}
	}
	if(count>0){
	printf("%d\n",count);		
	}
	else{
		printf("I must watch Star Wars with my daughter\n");
	}
	return 0;
}
