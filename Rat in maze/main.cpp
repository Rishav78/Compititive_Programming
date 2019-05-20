#include <iostream>

using namespace std;

int RatInMaze(int **arr, int *Mx, int *My, int n, int i=0, int j=0){
    if(i==(n-1) && j==(n-1)){
        return true;
    }else{
        for(int k=0;k<2;k++){
            int x = i+Mx[k];
            int y = j+My[k];
            if(x<n && y<n && arr[x][y]!=0){
                if(RatInMaze(arr,Mx,My,n,x,y)){
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int x[] = {0,1};
    int y[] = {1,0};
    int n;
    cin >> n;
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    cout << RatInMaze(arr,x,y,n);
    for(int i=0;i<n;i++){
        delete arr[i];
    }
    delete arr;
    return 0;
}
