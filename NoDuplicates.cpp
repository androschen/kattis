#include<iostream>

using namespace std;

int main(){
	string kalimat;
	string kata[40];
	
	getline(cin,kalimat);
	int index=0;
	int len=kalimat.size();
	for(int i=0;i<len;i++){
		if(kalimat[i]==' '){
			index++;
			continue;	
		}
		kata[index]+=kalimat[i];
	}
	int count=0;
	for(int i=0;i<=index;i++){
		for(int j=0;j<=index;j++){
			if(kata[i]==kata[j]){
				count++;
			}
		}
	}

	if(count==index+1){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	
	return 0;
}
