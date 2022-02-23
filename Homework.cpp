#include<iostream>
#include<bits/stdc++.h>

using namespace std;
// Compiler Harus C++ 11

int main(){
	string s;
	
	cin>>s;
	string x[501];
	int index=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==';'){
			index++;
			continue;	
		}
		x[index]+=s[i];
	}
	int count=0;
	for(int i=0;i<=index;i++){
		int y,z;
		int ctr=0;
		string left,right;
		for(int j=0;j<x[i].size();j++){
			if(x[i][j]=='-')  ctr=1;
		}
		if(ctr==1){
			for(int j=0;j<x[i].size();j++){
				if(x[i][j]=='-'){
					for(int k=0;k<j;k++){
						left+=x[i][k];
					}
					for(int k=j+1;k<x[i].size();k++){
						right+=x[i][k];
					}
				}
			}
			y=stoi(left);
			z=stoi(right);
			for(int j=y;j<=z;j++){
				count++;
			}
		}
		else{
			count++;
		}
	}
	cout<<count<<endl;
	
	return 0;
}
