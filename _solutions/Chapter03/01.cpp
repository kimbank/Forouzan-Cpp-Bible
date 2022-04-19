#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "short 최대값 : ";
    cout << pow(2, 8*sizeof(short) - 1) - 1 << endl;
    cout << "short 최소값 : ";
    cout << pow(2, 8*sizeof(short) - 1) * -1 << endl;

    cout << "unsigned int 최대값 : ";
    cout << pow(2, 8*sizeof(unsigned int)) - 1 << endl;
    cout << "unsigned int 최소값 : ";
    cout << 0 << endl;
    
    return 0;
}