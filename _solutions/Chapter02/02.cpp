#include <iostream>

using namespace std;

int main() {
    // 너비의 최대값
    int MAX = 3;
    
    // 상단 별 출력
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
    // 하단 별 출력
    for (int i = MAX - 1; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}