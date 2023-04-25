#include<bits/stdc++.h>
using namespace std;
int main(){

    // Valid Triangle or not
    
    int a , b ,c;
    cin>>a>>b>>c;
    
    int sum=a+b+c;
    
    if(sum==180 && a>0 && b>0 && c>0){
    	cout<<"Valid"<<endl;
	}
	else{
		cout<<"Not"<<endl;
	}
	return 0;
}

