#include<bits/stdc++.h>
using namespace std;

int getlength(char name[]){
	int length =0;
	int i=0;
	while(name[i] != '\0'){
		length++;
		i++;
	}
	return length;
}

int main(){
	
	char name[100];
	//cin.getline(name ,50);
	cin>>name;
	cout<<"length is:"<<getlength(name)<<endl;
	// predefine  founction in cpp like strlen
	cout<<"length is ->"<<strlen(name)<<endl;
	
	return 0;
}
