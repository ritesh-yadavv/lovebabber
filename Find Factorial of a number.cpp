#include<bits/stdc++.h>
using namespace std;
int main(){
    //Find Factorial of a number
    
    int n;
    cin>>n;
    
    int fact =1;
    for(int i=1; i<=n; i++){
    	fact=fact*i;
    	cout<<fact<<endl;
	}
    
    return 0;
}
