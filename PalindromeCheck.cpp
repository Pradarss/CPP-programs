#include<iostream>
using namespace std;

bool palincheck(int n){
	bool c=1;
    int RevNum=0;
    while(n!=0){
	    RevNum=RevNum*10+n%10;
	    n/=10;
	}
	if(RevNum==n){
		c=true;
	}
	else{
		c=false;
    }
    return c;
}

int main(){
	int n;
	cout<<"Enter number to search:";
	cin>>n;
	cout<<palincheck(n);
}