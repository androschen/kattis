#include<iostream>
using namespace std;

int main(){
	int t,n,i,j;
	
	cin>> t;
	for(i=0;i<t;i++){
		cin>>n;
		string kota[n];
		string city[n];
		int index=0;
		for(j=0;j<n;j++){
			cin>>kota[j];	
		}
		for(j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(kota[j]==city[k]) break;
				if(k==n-1){
					city[index]=kota[j];
					index++;
				}
			}
		}
		cout<< index<<endl;
	}
	return 0;
}
