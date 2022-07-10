using namespace std;
#include<iostream>

int main(){
	int n;
	cout<<"enter no.";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
				cout<<" ";
			}
		for(int j=1;j<=i;j++){
				cout<<j<<" ";
			}
		cout<<"\n";
}
}