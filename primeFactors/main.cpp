#include <iostream>
#include<stdio.h>
using namespace std;

class PrimeFactor{
    int n;
public:
    PrimeFactor(){
        cin >> n;
    }
    void factors(){
        int dup=n,i=2,j;
        while(dup>1){
                j=0;
            while(dup%i==0){
                j++;
                dup/=i;
            }
            if(j>0)
                cout << i << "^" <<j << " ";
            i++;
        }
    }
};

int main()
{
    PrimeFactor obj;
    obj.factors();
    return 0;
}
