#include<iostream>
using namespace std;

int main(){
	int a[100];
	cin>>a;
	
	cout<<a;
	int i=1;
	while(a[i]!='\0'){
		cout<<a[i]<<endl;
	}
	cout<<a[1];
}