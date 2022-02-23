#include<iostream>

using namespace std;

int main(){
	int m;
	char a;
	string s;
	
	int alfa[27]={0};
	int count=0;
	int sum=0;
	while(true){
		cin>>m;
		if(m==-1){
			break;
		}
		cin>>a>>s;
		int index=a-65;
		alfa[index]++;
		if(s=="right"){
			sum+=m+((alfa[index]-1)*20);
			count++;
		}
	}
	cout<<count<<" "<<sum<<endl;
	
	return 0;
}
