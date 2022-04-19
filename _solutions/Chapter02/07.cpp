#include <iostream>

using namespace std;

int main() {
    string familyName, givenName;

    cout << "성을 입력하세요 \t: ";
    cin >> familyName;
    
    cout << "이름을 입력하세요\t: ";
    cin >> givenName;

    cout << "서양식 이름 표현: " << givenName << ", " << familyName;
    
    return 0;
}