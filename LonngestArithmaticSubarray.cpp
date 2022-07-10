#include<iostream>
using namespace std;

int main(){
	int n,pd,ans,j,curr;
	cout<<"enter size of array:";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
	    cin>>array[i];	
	}
	ans=2;
	pd=array[1]-array[0];
	j=2;
	curr=2;
    while(j<n){
    	if(pd==array[j]-array[j-1]){
    		curr++;
		}
		else{
			pd=array[j]-array[j-1];
			curr=2;
		}
		ans=max(ans,curr);
		j++;
	}
	cout<<ans<<endl;
}