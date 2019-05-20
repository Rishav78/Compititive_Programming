#include <iostream>

using namespace std;

int main()
{while(true){
    int n,pos=1,pre=-1;
    cin >> n;
    for(int i=0;n>0;i++){
        pos=pos+(n%10==7 ? (1<<i):0);
        pre=pre+(1<<i);
        n/=10;
    }
    cout << pos+pre << endl;
}
    return 0;
}
