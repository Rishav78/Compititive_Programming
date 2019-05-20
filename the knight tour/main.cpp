#include <iostream>

using namespace std;

bool KnigthTour(int **arr, int n, int *Mx, int *My, int i=0, int j=0, int moves=1){
    static int num=2;
    if(moves==n*n){
        return true;
    }else{
        for(int k=0;k<8;k++){
            int x = i+Mx[k];
            int y = j+My[k];
            if(x>=0 && y>=0 && x<n  && y<n && arr[x][y]==-1){
                arr[x][y]=num++;
                if(KnigthTour(arr,n,Mx,My,x,y,moves+1)==true){
                    return true;
                }
                num--;
                arr[x][y]=-1;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=-1;
        }
    }
    arr[0][0]=1;
    if(KnigthTour(arr,n,xMove,yMove)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << arr[i][j];
                if(arr[i][j]<10){
                    cout << "  ";
                }else{
                    cout << " ";
                }
            }
            cout << endl;
        }
    }else{
        cout << 0;
    }
    for(int i=0;i<n;i++){
        delete arr[i];
    }
    delete arr;
    return 0;
}
