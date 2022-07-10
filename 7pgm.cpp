using namespace std;
#include<iostream>
#include<fstream>

int main(){
	ofstream myfile("1stfile.txt");
	
	myfile<<"hello world";
	myfile.close();
	
string n;
ifstream myreadfile("1stfile.txt");
while(getline(myreadfile,n));
cout<<n;	
	
}
