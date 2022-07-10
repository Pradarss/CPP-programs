#include<iostream>
using namespace std;

int main(){
	int n,t;
	cout<<"enter number:";
	cin>>n;
	int f=0,s=1;
	for(int i=0;i<n;i++){
		cout<<f<<" ";
		t=f+s;
		f=s;
		s=t;
	}
	return 0;
}