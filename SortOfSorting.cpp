#include<bits/stdc++.h>

using namespace std;

void buble(string *name,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(name[j][0]>name[j+1][0]){
				string temp=name[j];
				name[j]=name[j+1];
				name[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(name[j][0]==name[j+1][0]&&name[j][1]>name[j+1][1]){
				string temp=name[j];
				name[j]=name[j+1];
				name[j+1]=temp;
			}
		}
	}
}

int main(){
	int n;
	
	while(true){
		cin>>n;
		if(n==0) break;
		string name[n+1];
		for(int i=0;i<n;i++){
			cin>>name[i];
		}
		buble(name,n);
		
		for(int i=0;i<n;i++){
			cout<<name[i]<<endl;
		}
		cout<<endl;
	}
	return 0;
}
