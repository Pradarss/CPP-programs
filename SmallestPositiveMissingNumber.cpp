#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter size of array:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	const int N=10e6+2;
	bool c[N];
	for(int i;i<N;i++){
		c[i]=false;
	}
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			c[a[i]]=true;
		}
	}
	int ans=-1;
	for(int i=1;i<N;i++){
		if(c[i]==false){
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
}