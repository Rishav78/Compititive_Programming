#include <iostream>

using namespace std;

int main()
{
    int n,m=0;
    cin >> n;
    int totalCombination = (1<<n);
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<totalCombination;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                sum+=arr[j];
            }
        }
        if(sum%2==1 && sum>m){
            m=sum;
        }
    }
    cout << m;
    return 0;
}
