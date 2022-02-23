#include<stdio.h>
#include<math.h>

int main(){
	int n,w,h,p,i;
	
	scanf("%d %d %d",&n,&w,&h);
	double diagonal=sqrt(w*w+h*h);
	for(i=0;i<n;i++){
		scanf("%d",&p);
		if(p<=diagonal){
			printf("DA\n");
		}
		else{
			printf("NE\n");
		}
	}
	return 0;
}
