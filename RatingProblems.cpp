#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,k,r;
	
	cin>>n>>k;
	int sum=0;
	for(int i=0;i<k;i++){
		cin>>r;
		sum+=r;
	}
	if(n==k){
		cout<<(double)sum/n<<" "<<(double)sum/n<<endl;
	}else{
		cout<<double(sum+(n-k)*-3)/n<<" "<<double(sum+(n-k)*3)/n<<endl;
	}

	return 0;
}

