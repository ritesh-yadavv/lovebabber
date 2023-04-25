#include<bits/stdc++.h>
using namespace std;

void convertIntoUppercase(char arr[]){
	
	int n = strlen(arr);
	for( int i=0; i<n; i++){
		                              // arr[i] !='_' it is use space b/w element
		if(arr[i] >='a' && arr[i] <='z' && arr[i] != '_'){// it is use only both present uppercase & lowercase
		
		// Lowercase to Uppercase
		   //case 1
		arr[i]=arr[i]-'a'+'A';
	     // case 2
	   // arr[i]=arr[i]-32;
		
		// Uppercase to Lowercase
		    // case 1
	//	arr[i]=arr[i]+32;
		   // case 2
	//	arr[i]=arr[i]-'A'+'a';   
	
   	    }
	}
}


int main(){
	
	char arr[100]="Ritesh";
//	char arr[100]="RITESH"
	
    convertIntoUppercase(arr);
	cout<<arr<<endl;
	
	return 0;
}
