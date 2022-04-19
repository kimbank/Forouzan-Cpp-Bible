#include <iostream>

using namespace std;

int main() {
    int tmp;
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        cout << i + 1 << "번째 숫자를 입력하세요 : ";
        cin >> tmp;
        
        sum += tmp;
    }

    cout << "\n4개의 숫자의 합은 " << sum << " 입니다.";

    return 0;
}