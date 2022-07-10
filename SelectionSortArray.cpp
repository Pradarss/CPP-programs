#include<iostream>
using namespace std;

int selectsort(int array[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(array[j]<array[i]){
				int temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"enter size of arr:";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<selectsort(array,n);
}