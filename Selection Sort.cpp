#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int>arr{5,4,3,2,1};
	int n=arr.size();
	
	//selection sort
	for(int i=0; i<n-1; i++){
		int minIndex=i;
		
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[minIndex]){
				//new minimum, then store
				minIndex =j;
			}
		}
		//swap
		swap(arr[i],arr[minIndex]);
	}
	//printing
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
