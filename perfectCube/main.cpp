#include <iostream>

using namespace std;

class PerfectCube{
    int num;
    int arr[1000]={0};
public:
    PerfectCube(){
        cin >> num;
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<1000;i++){
            if(arr[i]==0){
                arr[i]=arr[i-1]+1;
                    if((i*i*i)<1000){
                            int j=2;
                            int cube=i*i*i;
                            arr[cube]=1;
                            while(cube*j<1000){
                                arr[cube*j]=1;
                                j++;
                            }
                    }
            }
            else{
                arr[i]=arr[i-1];
            }
        }
    }
    int isPerfectCube(){
        return arr[num]==arr[num-1] ? 0:arr[num];
    }
};

int main()
{
    PerfectCube obj;
    string s = "NOT A CUBE FREE NUMBER";
    int o = obj.isPerfectCube();
    if(o==0){
        cout << s;
    }else{
        cout << o;
    }
    return 0;
}
