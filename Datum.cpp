#include<iostream>

using namespace std;

int main(){
	int day,month;
	
	cin>>day>>month;
	
	string hari[]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	int bulan[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	for(int i=0;i<month-1;i++){
		day+=bulan[i];
	}

	cout<<hari[day%7]<<endl;
	return 0;
}
