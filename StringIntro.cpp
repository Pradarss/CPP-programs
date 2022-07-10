#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	//string str;
	//getline(cin, str);
	//cout<<str<<endl;
	
	//string s1="fam";
	//string s2="ily";
	//s1.append(s2);
	//cout<<s1+s2<<endl;
	
	//cout<<s1[0]<<endl;
	
	//string abc="nincompoop";
	//cout<<abc<<endl;
	//abc.clear();
	//if(abc.empty()){
	//	cout<<"string is empty"<<endl;
	//}
	
	//if(!s1.compare(s2)){
	//	cout<<"strings are equal";
	//}
	
	//abc.erase(3,3);
	//cout<<abc<<endl;
	
	//cout<<abc.find("com")<<endl;
	
	//abc.insert(2,"lol");
	//cout<<abc<<endl;
	
	//cout<<abc.substr(6,9)<<endl;
	
	//string num="123";
	//int x=stoi(num);
	//cout<<x+2<<endl;
	//cout<<to_string(x)+"2"<<endl;
	
	string st="asdfghj";
	sort(st.begin(), st.end());
	cout<<st<<endl;
	sort(st.begin(), st.end(), greater<int>);
	cout<<st<<endl;
	return 0;
}