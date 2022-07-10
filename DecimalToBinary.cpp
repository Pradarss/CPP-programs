#include<iostream>
#include<cmath>
using namespace std;

int decimaltobinary(int n){
	int ans=0;
	int x=1;
	while(x<=n)
		x*=2;
    x/=2;
	while(x>0){
		int LastDigit=n/x;
		n-=LastDigit*x;
		x/=2;
		ans=ans*10+LastDigit;
	}
	return ans;
}

int main(){
	int n;
	cout<<"enter number to convert:";
	cin>>n;
	cout<<decimaltobinary(n)<<"\n";
}