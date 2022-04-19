#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "정사각형의 변 하나를 입력하세요 : ";
    cin >> a;

    cout << "정사각형의 면적 : " << a * a;
    cout << "\n";
    cout << "정사각형의 둘레 : " << 4 * a;
    
    return 0;
}