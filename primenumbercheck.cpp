#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i,n;
	cout<<"enter no. to check:";
	cin>>n;
	bool flag=0;
	
	for(i=2;i<sqrt(n);i++){
		if(n%i==0){
			cout<<"entered number is a non-prime number\n";
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"entered number is a prime number";
	}
}