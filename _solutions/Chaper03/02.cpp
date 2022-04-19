#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "long 최대값 : ";
    cout << pow(2, 8*sizeof(long) - 1) - 1 << endl;
    cout << "long 최소값 : ";
    cout << pow(2, 8*sizeof(long) - 1) * -1 << endl;

    cout << "long long 최대값 : ";
    cout << pow(2, 8*sizeof(long long) - 1) - 1 << endl;
    cout << "long long 최소값 : ";
    cout << pow(2, 8*sizeof(long long) - 1) * -1 << endl;
    
    return 0;
}