#include<iostream>
using namespace std;

int binsearch(int array[],int n,int key){
	int s=0, e=n;
	while(s<=e){
		int mid=(s+e)/2;
		
		if(array[mid]==key){
			return mid;
		}
		else if(array[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return -1;
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
	cout<<binsearch(array,n,key);
	return 0;
}