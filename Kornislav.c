#include<stdio.h>
void sort(int a[]){
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main(){
	int a[5],i;
	
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	sort(a);
	
	int hasil=a[0]*a[2];
	
	printf("%d\n",hasil);
	
	return 0;
}
