#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(char word[]){
	int i=0;
	int n = strlen(word);
	int j= n-1;
	
	while(i <= i){
		if(word[i] != word[j]){
			return false;
		}
		else{
			i++;
			j--;
		}
	}
	return true;
	
}
//t.c=O(n)
//s.c=O(1)

int main(){
	
	char arr[100]="babbar";
	
	//cin.getline(arr ,100);
	cout<<"palindrome check:"<<checkpalindrome(arr);
	return 0;
}
