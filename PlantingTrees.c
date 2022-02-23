#include<stdio.h>

void insertionsort(int t[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=t[i];
		j=i-1;
		while(j>=0&&t[j]<temp){
			t[j+1]=t[j];
			j=j-1;
		}
		t[j+1]=temp;
	}
}

int main(){
	int n,i;
	int max=0;

	scanf("%d",&n);
	int t[n];
	int sum[n];
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
	}
	insertionsort(t,n);
	for(i=0;i<n;i++){
		sum[i]=t[i]+i+1;
		if(sum[i]>max){
			max=sum[i];
		}		
	}
	printf("%d\n",max+1);
	return 0;
}
