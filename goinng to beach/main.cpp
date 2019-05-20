#include <iostream>

using namespace std;

int main()
{
    int n,maxwt,maxValue=0;
    cin >> maxwt >> n;
    int noOfSubsets = (1<<n);
    int w[n],v[n];
    for(int i=0;i<n;i++){
        cin >> w[i];
    }
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=1;i<noOfSubsets;i++){
        int wt=0;
        int total=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                wt+=w[j];
                total = total + v[j];
            }
        }
        if(wt<=maxwt && maxValue<total){
            maxValue=total;
        }
    }
    cout << maxValue;
    return 0;
}
