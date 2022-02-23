#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	
	cin>>t; getchar();
	
	while(t--){
		vector<string>v;
		string forestSound;
		
		getline(cin,forestSound);
		
		int count=0;
		for(int i=0;i<forestSound.size();i++){
			if(forestSound[i]==' ')	count++;
		}
		vector<string>mS;
		int idxForest=0;
		for(int j=0;j<count+1;j++){
			string manySound;
			for(int i=idxForest;i<forestSound.size();i++){
				if(forestSound[i]==' '){
					idxForest+=1;
					break;
				}
				manySound+=forestSound[i];
				idxForest++;
			}
			mS.push_back(manySound);
		}
		
		while(true){
			string sound;
			string animalWSound;
			
			getline(cin,animalWSound);
			if(animalWSound=="what does the fox say?") break;
			
			int idxSound=0;
			for(int i=0;i<animalWSound.size();i++){
				if(animalWSound[i]==' '){
					idxSound+=6;
					break;
				}
				idxSound++;
			}
			for(int i=idxSound;i<animalWSound.size();i++){
				sound+=animalWSound[i];
			}
			v.push_back(sound);
		}
		for(int i=0;i<count+1;i++){
			for(int j=0;j<v.size();j++){
				if(mS[i]==v[j]) break;
				if(j==v.size()-1){
					cout<<mS[i]<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
