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


void reverseCharArray(char name[]){
	int i=0;
	int n=getlength(name);
	int j=n-1;
	while(i<=j){
		swap(name[i] , name[j]);
		i++;
		j--;
	}
	
}

int main(){
	
	char name[100];
	cin>>name;
	
	cout<<"length is:"<<getlength(name)<<endl;

	reverseCharArray(name);
	cout<<"After reversal process:"<<name<<endl;
	
	
	return 0;
}
