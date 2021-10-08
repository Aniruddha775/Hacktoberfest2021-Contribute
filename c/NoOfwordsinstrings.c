#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i,c=0;
	for(i=0;i<s.length();i++){
		if(s[i]==' ')
		continue;
		c++;
	}
	cout<<c;
	return 0;
}
