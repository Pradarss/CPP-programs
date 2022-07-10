using namespace std;
#include<iostream>

void swap(int*x,int*y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void bubble_sort(int a[],int n){
    int i,j;
	for(i=0;n-1;i++){
	    for(j=0;n-i-1;j++){
	        if(a[j]>a[j+1]){
		        swap(a[j],a[j+1]);	
            }
        }
    }
}

int main(){
	int a[]={9,8,7,6,5,4,3,2,1,0};
	cout<<"initial values are:";
	for(int i=0;i<10;i++){
		cout<<a[i];
	}
	int n=sizeof(a)/sizeof(a[0]);
	
	bubble_sort(a,n);
	cout<<"after using bubble sort:";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}	
}