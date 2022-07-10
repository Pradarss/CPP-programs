#include<iostream>
using namespace std;

bool pytrip2(int x,int y,int z){
	int a=max(x,max(y,z));
	int b,c;
	
	if(a==x){
		b=y;
		c=z;
	}
	else if(a==y){
		b=x;
		c=z;
	}
	else{
		b=x;
		c=y;
	}
	
	if(a*a==b*b+c*c){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	
	if(pytrip2(x,y,z)){
		cout<<"pythagoran triplet";
	}
	else{
		cout<<"not a pythagoran triplet";
	}
}