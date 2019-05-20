
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(;t>0;t--){
	    long long int n,k,i,j;
	    cin >> n >> k;
	    //long long int sub = (1<<n);
	    long long int arr[n];;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++){
                    cout << arr[i] << " " << arr[j] << " " << abs(arr[i]-arr[j]) << endl;
	            if(abs(arr[i]-arr[j])==k){

	            }
	        }
	        if(j<n){
	            break;
	        }
	    }
	    /*for(i=1;i<sub;i++){
	        int diff=0;
	        if(__builtin_popcount(i)==2){
	            int dup=i;
	            for(int j=0;dup>0;j++){
	                if(dup&1){
	                    diff=abs(diff-arr[j]);
	                }
	                dup=dup>>1;
	            }
	        }
	        if(diff==k){
	            break;
	        }
	    }*/
	    if(i<n){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
}
