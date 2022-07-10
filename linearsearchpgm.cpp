using namespace std;
#include<iostream>

int lin_search(int a[],int n, int z){
	for(int i=0;i<n;i++){
		
		if(a[i]==z)
			return i;
		
	}
	
    return -1;	
}

int main(){
	int z;
	int a[]={10,20,30,40,50,60,70,80,90,100};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<"enter element to search:";
	cin>>z;
	
	int result=lin_search(a,n,z);
	
	if(result==-1){
		cout<<"the element is not present in the given array";
	}
	else{
	    cout<<"the element is present at index:"<<result;
    }
}