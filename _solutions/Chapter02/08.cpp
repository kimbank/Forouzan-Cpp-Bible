#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 1;
    
    while (a || b) {
        cout << "0 을 두번 입력하면 종료합니다.\n";
        
        cout << "정수를 입력하세요 : ";
        cin >> a;
        
        cout << "정수를 입력하세요 : ";
        cin >> b;
        
        cout << a + b << "\n";
    }
    
    return 0;
}