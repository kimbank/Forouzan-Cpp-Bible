#include <iostream>

using namespace std;

int main() {
    const double TAX_RATE = 0.009;
    double sale = 1;

    while (true) {
        cout << "판매 금액이 0이면 종료합니다.\n판매금액을 입력하세요 : ";
        cin >> sale;
        
        if (!sale) break;

        cout << "판매 금액: " << sale << "\n";
        cout << "소비세: " << sale*TAX_RATE << "\n";
        cout << "전체 금액: " << sale* (1 - TAX_RATE) << "\n";
        cout << "\n";
    }
    
    return 0;
}