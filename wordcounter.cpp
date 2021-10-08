#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cout<<"Enter a sentence: ";
    getline(cin, s);
    s = regex_replace(s, regex("^ +| +$|( ) +"), "$1");
    int ans=0;
    string word="";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            ans++;
            word="";  
        }
        word+=s[i];
    }
    cout<<++ans;
}
