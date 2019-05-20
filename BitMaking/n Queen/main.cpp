#include <iostream>
#include<stdio.h>
using namespace std;

class NQueen{
    int **arr;
    int noOfQueens;
public:
    long long int c;
    NQueen(){
        c=0;
        cin >> noOfQueens;
        arr = new int*[noOfQueens];
        for(int i=0;i<noOfQueens;i++){
            arr[i] = new int[noOfQueens];
        }
        for(int i=0;i<noOfQueens;i++){
            for(int j=0;j<noOfQueens;j++){
                arr[i][j]=0;
            }
        }
    }
    void printMatrix(){
        for(int i=0;i<noOfQueens;i++){
            for(int j=0;j<noOfQueens;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    long long int posiblePosition(int i=0, int maskOfCol=0, int maskOfLeftBottom=0,int maskOfLeftTop=0, int maskOfRight=0){
        if(i>=noOfQueens){
            //printMatrix();
            //cout << endl;
            c++;
            return true;
        }else{
            for(int j=0;j<noOfQueens;j++){
                if((!(maskOfCol&(1<<j)) && !(i>=j ? maskOfLeftBottom&(1<<(i-j)) : (maskOfLeftTop&(1<<(j-i)))) && !(maskOfRight&(1<<(i+j))))){
                    maskOfCol=maskOfCol|(1<<j);
                    if(i>=j){
                        maskOfLeftBottom = maskOfLeftBottom|(1<<(i-j));

                    }else{
                        maskOfLeftTop = maskOfLeftTop|(1<<(j-i));

                    }
                    maskOfRight = maskOfRight|(1<<(i+j));
                    arr[i][j]=1;
                    posiblePosition(i+1, maskOfCol, maskOfLeftBottom, maskOfLeftTop, maskOfRight);
                    arr[i][j]=0;
                    maskOfCol=maskOfCol^(1<<j);
                    if(i>=j){
                        maskOfLeftBottom = maskOfLeftBottom^(1<<(i-j));
                    }else{
                        maskOfLeftTop = maskOfLeftTop^(1<<(j-i));
                    }
                    maskOfRight = maskOfRight^(1<<(i+j));
                }
            }
        }
        return false;
    }
    ~NQueen(){
        for(int i=0;i<noOfQueens;i++){
            delete arr[i];
        }
        delete arr;
    }
};

int main()
{
    NQueen obj;
    obj.posiblePosition();
    cout << obj.c;
    return 0;
}
