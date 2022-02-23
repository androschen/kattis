#include<bits/stdc++.h>

using namespace std;

int main(){
	int s,t,n;
	
	cin>>s>>t>>n;
	int d[n+1],b[n],c[n];
	
	for(int i=0;i<n+1;i++){
		cin>>d[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	int time=0;
	for(int i=0;i<n;i++){
		time+=d[i];
		time+=(time%b[i]);
		time+=c[i];
	}
	time+=d[n];
	if(time>t){
		cout<<"no"<<endl;
	}else{
		cout<<"yes"<<endl;
	}
	return 0;
}
