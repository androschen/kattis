#include<stdio.h>
#include<string.h>

int main(){
	char s[100000];
	int i;
	
	scanf("%s",&s);
	int len=strlen(s);	
	int cspace=0;
	int chk=0;
	int chb=0;
	int cs=0;
	for(i=0;i<len;i++){
		if(s[i]=='_'){
			cspace++;
		}
		else if(s[i]>='a'&&s[i]<='z'){
			chk++;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			chb++;
		}
		else{
			cs++;
		}
	}
	printf("%.15lf\n",(double)cspace/len);
	printf("%.15lf\n",(double)chk/len);
	printf("%.15lf\n",(double)chb/len);
	printf("%.15lf\n",(double)cs/len);
	
	return 0;
}
