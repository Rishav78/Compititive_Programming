#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	int c=0;
	for(int i=num;i>2;i--){
	    c = c + (i-2)*(i-1);
	}
	cout << c;
}
