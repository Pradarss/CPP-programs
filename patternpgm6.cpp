using namespace std;
#include<iostream>

int main(){
	int row,colmn;
	cout<<"enter no. of rows:";
	cin>>row;
	cout<<"enter no. of columns:";
	cin>>colmn;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=colmn;j++){
			if(i==1 || i==row){
				cout<<"*";
			}
			else if(j==1 || j==colmn){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}