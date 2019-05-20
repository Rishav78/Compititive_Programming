#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr,sum=0,ans=0;
    for(int i=0;i<n;i++){
        cin >> arr;
        if((sum=sum+arr)<0){
            sum=0;
        }
        ans = max(ans,sum);
    }
    cout << ans;
    return 0;
}
