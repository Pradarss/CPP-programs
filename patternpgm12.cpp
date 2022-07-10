using namespace std;
#include<iostream>

int main(){
	int n,j;
	cout<<"enter no.";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
				cout<<" ";
			}
		int k=i;
		for(;j<=n;j++){
				cout<<k--<<" ";
			}
		k=2;
		for(;j<=n+i-1;j++){
			cout<<k++<<" ";
		}
		cout<<"\n";
}
}