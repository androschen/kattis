#include<stdio.h>

void bublesort(int arr[],int n){
	int i,j;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int n,i;
	int alice=0,bob=0;
	
	scanf("%d",&n);
	int bil[n];
	for(i=0;i<n;i++){
		scanf("%d",&bil[i]);
	}
	bublesort(bil,n);
	for(i=0;i<n;i++){
		if(i%2==0){
			alice+=bil[i];
		}
		if(i%2!=0){
			bob+=bil[i];
		}
	}
		printf("%d %d\n",alice,bob);
	return 0;
}
