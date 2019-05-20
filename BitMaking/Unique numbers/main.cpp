#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mask=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << endl;
    for(int i=0;i<n;i++){
        if(!(mask&(1<<arr[i]))){
            cout << arr[i];
            mask=mask|(1<<arr[i]);
        }
    }
    return 0;
}
