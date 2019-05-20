#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    int c=0;
    cin >> s1 >> s2;
    int s = s1.size() < s2.size() ? s2.size():s1.size();
    for(int i=0;i<s;i++){
        if(s1[i]!=s2[i]){
            if(s1.size()<s2.size()){
                s1.insert(s1.begin()+i,s2[i]);
            }
            else if(s2.size()<s1.size()){
                s2.insert(s2.begin()+i,s1[i]);
            }
            else{
                s1[i]=s2[i];
            }
            c++;
        }
    }
    cout << s1 << " " << s2 << " " << c;
    return 0;
}
