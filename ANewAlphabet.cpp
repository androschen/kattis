#include<iostream>
#include<map>
using namespace std;

int main(){
	int i;
	map<char,string>m;
	
	m['A']="@";
    m['B']="8";
    m['C']="(";
	m['D']="|)";
	m['E']="3";
	m['F']= "#";
	m['G']="6";
    m['H']="[-]";
    m['I']= "|";
    m['J']= "_|";
    m['K']="|<";
    m['L']="1";
    m['M']="[]\\/[]";
    m['N']="[]\\[]";
    m['O']= "0";
    m['P']="|D";
    m['Q']="(,)";
    m['R']="|Z";
    m['S']= "$";
    m['T']= "']['";
    m['U']= "|_|";
    m['V']= "\\/";
    m['W']="\\/\\/";
    m['X'] ="}{";
    m['Y']= "`/";
    m['Z']= "2";
    
	string s;
	getline(cin,s);
	int len=s.size();
	for(i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='Z'){
			cout<<m[s[i]];
		}
		else if(s[i]>='a'&&s[i]<='z'){
			cout<<m[s[i]-32];
		}
		else{
			cout<<s[i];
		}
	}
	cout<<endl;
	
	return 0;
}
