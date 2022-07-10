#include<iostream>
using namespace std;

int linsearch(int array[],int n,int key){
	for(int i=0;i<n;i++){
		if(array[i]==key){
			return i;
		}
		else{
			return -1;
		}
	}
	
}

int main(){
	int n,key;
	cout<<"enter size of arr:";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"enter no. to search:";
	cin>>key;
	cout<<linsearch(array,n,key);
}