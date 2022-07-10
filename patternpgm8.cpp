using namespace std;
#include<iostream>

int main(){
	int row,colmn;
	cout<<"enter no. of rows:";
	cin>>row;
	cout<<"enter no. of columns:";
	cin>>colmn;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
				cout<<"*";
			}
		int space=2*row-2*i;
		for(int j=1;j<=space;j++){
		    cout<<" ";
		}
		for(int j=1;j<=i;j++){
				cout<<"*";
			}
		cout<<"\n";
}
}