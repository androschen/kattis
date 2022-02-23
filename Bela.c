#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	char b,c[3];
	
	scanf("%d %c",&n,&b);
	int sum=0;
	for(i=0;i<4*n;i++){
		scanf("%s",&c);
		if(c[0]=='A'){
			sum+=11;
		}
		else if(c[0]=='K'){
			sum+=4;
		}
		else if(c[0]=='Q'){
			sum+=3;
		}
		else if(c[0]=='T'){
			sum+=10;
		}
		else if(c[0]=='J'){
			if(c[1]==b){
				sum+=20;
			}	
			else{
				sum+=2;
			}
		}
		else if(c[0]=='9'){
			if(c[1]==b){
				sum+=14;
			}
			else{
				sum+=0;
			}
		}
		else{
			sum+=0;
		}
	}
	printf("%d\n",sum);
	
	return 0;
}
