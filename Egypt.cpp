#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[4]={0};
	
	while(true){
		for(int i=0;i<3;i++){
			cin>>a[i];
		}
		sort(a,a+3);
	
		if(a[0]==0&&a[1]==0&&a[2]==0) break;
		
		if(pow(a[0],2)+pow(a[1],2)==pow(a[2],2)){
			cout<<"right"<<endl;
		}
		else{
			cout<<"wrong"<<endl;
		}
	}
	return 0;
}
