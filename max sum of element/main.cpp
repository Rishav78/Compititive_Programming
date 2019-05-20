
#include <iostream>
#include<math.h>
using namespace std;

int permutation(int n,int *arr, int j=0){
    static int max;
    if(j>=n){
            int sum=0;
        for(int k=0;k<n-1;k++){
            sum=sum+abs(arr[k]-arr[k+1]);
        }
        return sum;
    }else{
        for(int i=j;i<n;i++){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            int x = permutation(n,arr,j+1);
            if(x>max){
                max=x;
            }
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    return max;
}

int main() {
	int t;
	cin >> t;
	for(;t>0;t--){
	    long long int n;
	    cin >> n;
	    int arr[n];
	    for(int i=1;i<=n;i++){
            arr[i-1]=i;
	    }
	    cout << permutation(n,arr) << endl;
	}
}

