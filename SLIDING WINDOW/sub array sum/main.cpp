#include <iostream>

using namespace std;

int main()
{
    int n,k,sum=0,ksum=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<k;i++){
        ksum+=arr[i];
    }
    sum=ksum;
    for(int i=k;i<n;i++){
        ksum = ksum + arr[i] - arr[i-k];
        sum+=ksum;
    }
    cout << sum;
    return 0;
}
