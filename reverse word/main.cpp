#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(;t>=0;t--){
	    char arr[1000];
	    int i=0;
	    int space=1;
	    vector<int> ob;
	    string s="";
	    bool flag=0;
	    vector<string> obj;
	    cin.getline(arr,1000);
	    //cout << arr << endl;
	    while(true){
	        if(arr[i]==' ' || arr[i]=='\0'){
	            if(flag==1){
	                //cout << s << endl;
	                ob.push_back(space);
	                space=0;
    	            obj.push_back(s);
    	            s="";
    	            flag=0;
	            }
	            space++;
	            if(arr[i]=='\0'){
	                break;
	            }
	        }else{
	            if(flag==0){
	                flag=1;
	            }
	            s=s+arr[i];
	        }
	        i++;
	    }
	    for(int j=obj.size()-1;j>=0;j--){
	        cout << obj[j];
	        if(j-1>=0){
	            for(int k=0;k<ob[j];k++){
	                cout << " ";
	            }
	        }
	    }
	    cout << endl;
	}
}
