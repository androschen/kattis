#include<iostream>
#include<map>
using namespace std;

int main(){
	map <string,string>m;
	string kata;
	string kamus;
	string baris;
	string input;
	
	int j=0;
	while(true){
		getline(cin,baris);
		int len=baris.size();
		for(int i=0;i<len;i++,j++){
			if(baris[i]==' '){
				break;
			}
			kamus+=baris[i];	
		}
		for(int i=(j+1);i<len;i++){
			kata+=baris[i];
		}
		if(baris==""){
			break;
		}
		m[kata]=kamus;
		j=0;
		kamus="";
		kata="";
	}
	
	while(cin>>input){
		if(m[input]!=""){
			cout<< m[input]<<endl;
		}
		else{
			cout<<"eh"<<endl;
		}
	}
	
	cin.get();
	return 0;
}
