#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int l[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>l[i];
		sum+=l[i];
	}
	
	cout<<sum-n+1<<endl;

	return 0;
}

