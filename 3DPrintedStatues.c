#include<stdio.h>
#include<math.h>

int main(){
	int n;
	
	scanf("%d",&n);
	int day=ceil(log(n)/log(2));
	printf("%d\n",day+1);
		
	return 0;
}
