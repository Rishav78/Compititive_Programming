#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(;t>0;t--){
        string s;
        int k,c=0;
        cin >> s;
        for(int i=0;i<s.size();i++){
            for(int j=s.size()-1;j>=i;j--){
                for(k=i;k<=j;k++){
                    if(s[k]=='a' || s[k]=='z'){
                        c++;
                    }
                }
                if(k>j){
                    break;
                }
            }
        }
        cout << c;
    }
    return 0;
}
