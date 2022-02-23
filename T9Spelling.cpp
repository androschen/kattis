#include<iostream>
using namespace std;

int main(){
	int n;
	string s;
	string x;
	
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		x="";
		getline(cin,s);
		int len=s.size();
		for(int j=0;j<len;j++){
			if(s[j]==s[j-1]){
				x+=" ";
			}
			if(s[j]=='a'&&s[j-1]=='b'||s[j]=='a'&&s[j-1]=='c'||s[j]=='b'&&s[j-1]=='a'||s[j]=='b'&&s[j-1]=='c'||s[j]=='c'&&s[j-1]=='a'||s[j]=='c'&&s[j-1]=='b'){
				x+=" ";
			}
			if(s[j]=='d'&&s[j-1]=='e'||s[j]=='d'&&s[j-1]=='f'||s[j]=='e'&&s[j-1]=='d'||s[j]=='e'&&s[j-1]=='f'||s[j]=='f'&&s[j-1]=='d'||s[j]=='f'&&s[j-1]=='e'){
				x+=" ";
			}
			if(s[j]=='g'&&s[j-1]=='h'||s[j]=='g'&&s[j-1]=='i'||s[j]=='h'&&s[j-1]=='g'||s[j]=='h'&&s[j-1]=='i'||s[j]=='i'&&s[j-1]=='g'||s[j]=='i'&&s[j-1]=='h'){
				x+=" ";
			}
			if(s[j]=='j'&&s[j-1]=='k'||s[j]=='j'&&s[j-1]=='l'||s[j]=='k'&&s[j-1]=='j'||s[j]=='k'&&s[j-1]=='l'||s[j]=='l'&&s[j-1]=='j'||s[j]=='l'&&s[j-1]=='k'){
				x+=" ";
			}
			if(s[j]=='m'&&s[j-1]=='n'||s[j]=='m'&&s[j-1]=='o'||s[j]=='n'&&s[j-1]=='o'||s[j]=='n'&&s[j-1]=='m'||s[j]=='o'&&s[j-1]=='m'||s[j]=='o'&&s[j-1]=='n'){
				x+=" ";
			}
			if(s[j]=='p'&&s[j-1]=='q'||s[j]=='p'&&s[j-1]=='r'||s[j]=='p'&&s[j-1]=='s'||s[j]=='q'&&s[j-1]=='p'||s[j]=='q'&&s[j-1]=='r'||s[j]=='q'&&s[j-1]=='s'||s[j]=='r'&&s[j-1]=='p'||s[j]=='r'&&s[j-1]=='q'||s[j]=='r'&&s[j-1]=='s'||s[j]=='s'&&s[j-1]=='p'||s[j]=='s'&&s[j-1]=='q'||s[j]=='s'&&s[j-1]=='r'){
				x+=" ";
			}
			if(s[j]=='t'&&s[j-1]=='u'||s[j]=='t'&&s[j-1]=='v'||s[j]=='u'&&s[j-1]=='t'||s[j]=='u'&&s[j-1]=='v'||s[j]=='v'&&s[j-1]=='t'||s[j]=='v'&&s[j-1]=='u'){
				x+=" ";
			}
			if(s[j]=='w'&&s[j-1]=='x'||s[j]=='w'&&s[j-1]=='y'||s[j]=='w'&&s[j-1]=='z'||s[j]=='x'&&s[j-1]=='w'||s[j]=='x'&&s[j-1]=='y'||s[j]=='x'&&s[j-1]=='z'||s[j]=='y'&&s[j-1]=='w'||s[j]=='y'&&s[j-1]=='x'||s[j]=='y'&&s[j-1]=='z'||s[j]=='z'&&s[j-1]=='w'||s[j]=='z'&&s[j-1]=='x'||s[j]=='z'&&s[j-1]=='y'){
				x+=" ";
			}
			if(s[j]=='a') x+="2";
			else if(s[j]=='b') x+="22";
			else if(s[j]=='c') x+="222";
			else if(s[j]=='d') x+="3";
			else if(s[j]=='e') x+="33";
			else if(s[j]=='f') x+="333";
			else if(s[j]=='g') x+="4";
			else if(s[j]=='h') x+="44";
			else if(s[j]=='i') x+="444";
			else if(s[j]=='j') x+="5";
			else if(s[j]=='k') x+="55";
			else if(s[j]=='l') x+="555";
			else if(s[j]=='m') x+="6";
			else if(s[j]=='n') x+="66";
			else if(s[j]=='o') x+="666";
			else if(s[j]=='p') x+="7";
			else if(s[j]=='q') x+="77";
			else if(s[j]=='r') x+="777";
			else if(s[j]=='s') x+="7777";
			else if(s[j]=='t') x+="8";
			else if(s[j]=='u') x+="88";
			else if(s[j]=='v') x+="888";
			else if(s[j]=='w') x+="9";
			else if(s[j]=='x') x+="99";
			else if(s[j]=='y') x+="999";
			else if(s[j]=='z') x+="9999";
			else if(s[j]==' ') x+="0";
		}
		
		cout<<"Case #"<<i+1<<": "<<x<<endl;
	}
	return 0;
}
