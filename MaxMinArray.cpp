#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n,i;
	cout<<"enter size of array:";
	cin>>n;
    int array[n];
    for(int i=0;i>n;i++){
    	cin>>array[i];
	}
	int maxn=INT_MIN;
	int minn=INT_MAX;
	for(int i=0;i>n;i++){
        maxn=max(maxn,array[i]);
        minn=min(minn,array[i]);
	}
	cout<<maxn<<"\n"<<minn<<'\n';
}