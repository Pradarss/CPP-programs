#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter number to reverse:";
	cin>>n;
	int reverse=0;
	while(n>0){
		int lastdigit=n%10;
		reverse=reverse*10+lastdigit;
		n=n/10;
	}
	cout<<"number after inverse:"<<reverse<<"\n";
}