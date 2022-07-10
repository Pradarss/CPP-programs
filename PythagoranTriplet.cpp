#include<iostream>
#include<cmath>
using namespace std;

void maxn(int x,int y,int z){
	if(x>y){
		if(x>z){
			cout<<x;
		}
		else{
			cout<<z;
		}
	}
	else{
		if(y>z){
			cout<<y;
		}
		else{
			cout<<z;
		}
	}
}

void pytrip(int a,int b,int c){
	int p,q,r;
	bool flag=false;
	p=maxn(a,b,c);
	if(p==a){
		q=b;
		r=c;
	}
	else if(p==b){
		q=a;
		r=c;
	}
	else if(p==c){
		q=a;
		r=b;
	}
	else(pow(p,2)==pow(q,2)+pow(r,2)){
		flag=true
	}
	return flag;
}

int main(){
	cout<<"enter your first number:";
	cin>>a;
	cout<<"enter your secont number:";
	cin>>b;
	cout<<"enter your third number:";
	cin>>c;
	pytrip(a,b,c);
}