#include <iostream>

using namespace std;

int toNumber(int n, string s="", int o=0, int c=0){
    int num=0;
    if(o==n && c==n){
        cout << s << endl;
        return 1;
    }else{
        if(o<n){
            num = num + toNumber(n,s + '(',o+1,c);
        }
        if(c<o){
            num = num + toNumber(n,s + ')',o,c+1);
        }
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    cout << toNumber(n) << endl;
    return 0;
}
