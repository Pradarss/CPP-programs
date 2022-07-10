#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter size of array:";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[n];
	}
	int s=0;
	for(int i=0;i<=n;i++){
		s=0;
		for(int j=i;j<=n;j++){
			s+=array[j];
		}
	}
	cout<<s;
	return s;
}