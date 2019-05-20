#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    long long int z = (1<<s.size());
    for(long long int i=1;i<z;i++){
        long long int x = i,j=0;
        while(x>0){
            //x&1 ? cout << s[j]:cout << "";
            x=x>>1;
            j++;
        }
        //cout << endl;
    }
    cout << z;
    return 0;
}
