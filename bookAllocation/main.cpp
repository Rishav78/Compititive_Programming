#include <iostream>
#include<stdio.h>
using namespace std;

class BookAllocation{
    int numOfStudent,numOfBooks;
    int totalPages;
    int *pages;
public:
    BookAllocation(){
        totalPages=0;
        cin >> numOfStudent >> numOfBooks;
        pages = new int[numOfBooks];
        for(int i=0;i<numOfBooks;i++){
            cin >> pages[i];
            totalPages+=pages[i];
        }
    }
    int minPages(){
        int left = 0, right = totalPages;
        while(left<right){
            int m=(left+right)/2,i=1,j=0;
            int num=0;
            while(j<numOfBooks){
                    //cout << num << endl;
                    //getchar();
                num+=pages[j];
                if(num>m){
                        cout << num << " " << m << endl;
                    num=0;
                    i++;
                }
                    j++;

            }
            if(i>numOfStudent){
                left=m;
            }
            else{
                right=m;
            }
        }
        return left;
    }
    ~BookAllocation(){
        delete pages;
    }
};

int main()
{
    BookAllocation obj;
    cout << obj.minPages();
    return 0;
}
