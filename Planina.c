#include<stdio.h>
#include<math.h>

int main(){
	
	int n,iteration;
	scanf("%d",&n);
	
	iteration=pow(pow(2,n)+1,2);
	
	printf("%d",iteration);
	
	return 0;
}
