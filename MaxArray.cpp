#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter size of array";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int mx=-99999999;
	for(int i=0;i<n;i++){
		mx=max(mx,array[i]);
		cout<<mx<<endl;
	}
	return 0;
}