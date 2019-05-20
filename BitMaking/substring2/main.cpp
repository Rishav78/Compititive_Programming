#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char arr[100];
    cin >> arr;
    int c=0;
    int s = strlen(arr);
    int noOfSubsets = 1 << s;
    for(int i=1;i<noOfSubsets;i++){
        for(int j=0;j<s;j++){
            if(i&(1<<j)){
                    cout << arr[j];
                if(arr[j]=='a' || arr[j]=='z'){
                    c++;
                }
            }
        }
        cout << endl;
    }
    cout << c;
    return 0;
}
