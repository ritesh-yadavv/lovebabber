#include<bits/stdc++.h>
using namespace std;

void replaceSpace(char sentance[]){
	int i=0;
	int n = strlen(sentance);
	for( int i=0; i<n; i++){
		if(sentance[i] == ' '){
			sentance[i]=' ';
		}
	}
}

int main(){
	
	char sentance[100];
	cin.getline(sentance ,100);
	replaceSpace(sentance);
	cout<<"printing sentance "<<endl<<sentance<<endl;
	
	return 0;
}
