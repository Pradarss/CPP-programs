#include<iostream>
#include<cmath>
using namespace std;

string decimaltohexadecimal(int n){
    string ans="";
	int x=1;
	while(x<=n)
		x*=16;
    x/=16;
	while(x>0){
		int LastDigit=n/x;
		n-=LastDigit*x;
		x/=16;
        if(LastDigit<=9){
        	ans=ans+to_string(LastDigit);
		}
		else{
			char c='A'+LastDigit-10;
			ans.push_back(c);
		}
	}
	return ans;
}

int main(){
	int n;
	cout<<"enter number to convert:";
	cin>>n;
	cout<<decimaltohexadecimal(n)<<"\n";
}