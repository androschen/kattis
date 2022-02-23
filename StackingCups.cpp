#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	string left[n],right[n];
	int unit[n]={0};
	int idx[n];
	for(int i=0;i<n;i++){
		cin>>left[i]>>right[i];
		if(isdigit(left[i][0])){
			int num=stoi(left[i]);
			unit[i]=num/2;
			left[i]=right[i];
		}else{
			unit[i]=stoi(right[i]);
		}
		idx[i]=unit[i];
	}
	sort(unit,unit+n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(unit[i]==idx[j]){
				cout<<left[j]<<endl;
				break;
			}
		}
	}
	return 0;
}
