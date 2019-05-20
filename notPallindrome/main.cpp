#include<stdio.h>
#include <iostream>
using namespace std;

string revserse(string s){
    cout << s << endl;
    for(int i=0;i<s.size()/2;i++){
        char temp = s[i];
        s[i]=s[s.size()-1-i];
        s[s.size()-1-i]=temp;
    }
    cout << s << endl;
    getchar();
    return s;
}

int main() {
	string s;
	cin >> s;
	int c=0;
	for(int i=0;i<s.size();i++){
	    for(int j=i+1;j<s.size();j++){
	        string ss="";
	        for(int k=i;k<=j;k++){

	            ss=ss+s[k];
	        }
	        string sss;
	        sss=revserse(ss);
	        if(sss!=ss){
	            c++;
	        }
	    }
	}
	cout << c;
}

