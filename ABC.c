#include<stdio.h>

int main(){
	int a,b,c,i;
	char huruf[3];
	int med; 
	
	scanf("%d %d %d",&a,&b,&c);
	scanf("%s",&huruf);
	int max=a;
	if(b>a&&b>c) max=b;
	if(c>a&&c>b) max=c;
	int min=a;
	if(a>b&&c>b) min=b;
	if(a>c&&b>c) min=c;
	if(max==a&&min==b||max==b&&min==a) med=c;
	if(max==a&&min==c||max==c&&min==a) med=b;
	if(max==b&&min==c||max==c&&min==b) med=a;
	for(i=0;i<3;i++){
		if(huruf[i]=='A'){
			printf("%d",min);
		}
		if(huruf[i]=='B'){
			printf("%d",med);
		}
		if(huruf[i]=='C'){
			printf("%d",max);
		}
		if(i==2){
			printf("\n");
		}
		else{
			printf(" ");
		}
	}
	return 0;
}
