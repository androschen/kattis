#include<stdio.h>

int main(){
	int a,b,br,bs,as,umur,totalb;
	int count=0;
	int sum=0;
	
	scanf("%d %d %d %d %d",&b,&br,&bs,&a,&as);
	getchar();
	totalb=(br-b)*bs;
	while(totalb>=sum){
		sum+=as;
		count++;
	}
	printf("%d\n",a+count);
	return 0;
}
