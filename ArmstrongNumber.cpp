#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cout<<"enter number to check:";
	cin>>n;
	
	int sum=0;
	int original=n;
	while(n>0){
		int lastdigit=n%10;
		sum+=pow(lastdigit,3);
		n=n/10;
	}
	if(sum==original){
		cout<<"entered number is a armstrong number";
	}
	else{
		cout<<"entered number is not a armstrong number";
	}
}