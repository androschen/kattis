#include<iostream>

using namespace std;

int main(){
	long long int m,n,v;
	
	while(cin>>m>>n){
		if(m>n){
			v=m-n;
		}
		if(n>=m){
			v=n-m;
		}
		cout<<v<<endl;
	}
	cin.get();
	return 0;
}
