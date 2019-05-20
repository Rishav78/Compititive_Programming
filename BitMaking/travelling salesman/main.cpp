#include <iostream>
#include<stdio.h>
using namespace std;

class travelling{
    int v,e;
    int **graph;
public:
    int minDistance;
    travelling(){
        minDistance = INT_MAX;
        int x,y,value;
        cin >> v;
        graph = new int*[v];
        for(int i=0;i<v;i++){
            graph[i] = new int[v];
        }
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                graph[i][j]=0;
            }
        }
        cin >> e;
        for(int i=0;i<e;i++){
            cin >> x >> y >> value;
            graph[x][y] = value;
            graph[y][x] = value;
        }
    }
    void printGraph(){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                cout << graph[i][j] << " ";
            }
            cout << endl;
        }
    }
    void shortestPath(int row, int mask=0){
        static int total;
        if(mask&(1<<row)){
            int i;
            for(i=0;i<v;i++){
                if(!(mask&(1<<i))){
                    break;
                }
            }
            if(i>=v && row==0){
                if(total<minDistance){
                    minDistance=total;
                }
            }
        }
        else{
             mask=mask|(1<<row);
            for(int i=0;i<v;i++){
                total+=graph[row][i];
                if(graph[row][i]!=0)
                    shortestPath(i,mask);
                total-=graph[row][i];
            }
        }
    }
    ~travelling(){
        for(int i=0;i<v;i++){
            delete graph[i];
        }
        delete graph;
    }
};

int main()
{
    travelling arr;
    arr.shortestPath(0);
    cout << arr.minDistance;
    //arr.printGraph();
    return 0;
}
