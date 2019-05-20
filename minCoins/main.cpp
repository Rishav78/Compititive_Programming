#include <iostream>

using namespace std;
//BOTTOM UP APPROACH
int minCoins(int amount, int *arr, int n, int sum=0, int coins=0){
    static int mCoins=INT_MAX;
    if(sum>=amount){
        if(amount==sum){
            if(mCoins>coins){
                mCoins=coins;
            }
        }
    }else{
        for(int i=0;i<n;i++){
            minCoins(amount,arr,n,sum+arr[i],coins+1);
        }
    }
    return mCoins;
}

int main()
{
    int n,amount;
    cin >> amount >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << minCoins(amount,arr,n);
    return 0;
}
