#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int t[n];
	if(n%2!=0){
		cout<<"still running"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	ll sum=0;
	for(int i=0;i<n;i++){
		if(i%2==1){
			sum+=t[i]-t[i-1];
		}
	}
	cout<<sum<<endl;

	return 0;
}

