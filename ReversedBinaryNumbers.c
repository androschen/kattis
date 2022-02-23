#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	int binary[50];
	int index=0,p=0;
	int i,k,decimal=0;
	
	scanf("%d", &n);
	while(n!=0){
		binary[index]=n%2;
		n/=2;
		index++;
	}
	for(i=index-1;i>=0;i--){
		if(binary[i]==1){
			decimal+=pow(2,p);
			p++;
		}
		else{
			p++;
		}
	}
	printf("%d\n",decimal);
	return 0;
}
