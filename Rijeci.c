#include<stdio.h>

int main(){
	int k,a,b,i;
	int fn,f1=1,f2=1;
	
	scanf("%d",&k);
	if(k==0){
		a=1;
		b=0;
	}
	if(k==1){
		b=1;
		a=0;
	}
	else if(k==2){
		a=1;
		b=1;
	}
	else if(k==3){
		a=1;
		b=2;
	}
	else if(k>3){
		for(i=2;i<k;i++){
			fn=f1+f2;
			f2=f1;
			f1=fn;
			b=fn;
			if(i==k-2){
				a=fn;
			}
		}	
	}
	printf("%d %d\n",a,b);
	
	return 0;
}
