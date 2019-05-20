#include <iostream>

using namespace std;



int main()
{
    int n,k,i;
    cin >> n >> k;
    int arr[n];
    int sub = (1<<n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=1;i<sub;i++){
        int dup=i;
        int j=0;
        int sum=0;
        while(dup>0){
            if(dup&1){
                sum=sum+arr[j];
            }
            j++;
            dup=dup>>1;
        }
        if(sum==k){
            break;
        }
    }
    if(i<sub){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
