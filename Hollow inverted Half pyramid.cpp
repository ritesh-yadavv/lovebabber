#include<bits/stdc++.h>
using namespace std;
int main(){ 
     
       //Hollow Inverted Half Pyramid
      
      int n;
      cin>>n;
      for(int i=0; i<n; i++){
      	for(int j=0; j<n; j++){
      		if(j==n-i-1|| i==0 || j==0){
      			cout<<"*";
			  }
			  else{
			  	cout<<" ";
			  }
      		
		  }
		  cout<<endl;
	  }
	  return 0;
}
