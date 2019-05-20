#include <iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class Factors{
    int n;
    int arr[20]={0};
public:
    Factors(){
        cin >> n;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                arr[i]=1;
                arr[n/i]=1;
            }
        }
    }
    void factors(){
        for(int i=1;i<=n;i++){
            if(arr[i]){
                cout << i << " ";
            }
        }
    }
    ~Factors(){
        free(arr);
    }
};

int main()
{
    Factors obj;
    obj.factors();
    return 0;
}
