#include<iostream>
using namespace std;

int sumn(int n){
	int m;
	m=n*(n+1);
	int p=m/2;
	return p;
}

int main(){
	int q;
	cout<<"enter your number:";
	cin>>q;
	cout<<sumn(q);
}