#include<iostream>

using namespace std;

int main(){
    int n,total,efficient=0,dup=INT_MAX;
    cin >> n;
    int noOfSubsets = (1<<n);
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> total;
    for(int i=1;i<noOfSubsets;i++){
        int sum=0;
        int c=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                sum+=arr[j];
                c++;
            }
        }
        if(sum==total && c<dup){
            dup=c;
            efficient=i;
        }
    }
    for(int i=0;i<n;i++){
        if(efficient&(1<<i)){
            cout << arr[i] << " ";
        }
    }
}
