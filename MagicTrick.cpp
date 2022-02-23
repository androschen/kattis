#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	string s;
	
	cin>>s;
	int alphabet[28]={};
	for(int i=0;i<s.size();i++){
		alphabet[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(alphabet[i]>1){
			cout<<0<<endl;
			return 0;
		}
		
	}
	cout<<1<<endl;

	return 0;
}

