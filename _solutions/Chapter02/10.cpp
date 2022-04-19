#include <iostream>

using namespace std;

int main() {
    string City = "시/도 이름";
    string District = "구 이름";
    string Street = "도로 이름";
    string StreetNum = "도로 번호";
    string ZipCode = "우편 번호";

    string info[] = {City, District, Street, StreetNum, ZipCode};

    for (int i = 0; i < 5; i++) {
        cout << info[i] << "를 입력하세요 : ";
        cin >> info[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << info[i];
        
        if (i != 4)
            cout << ", ";
    }
    
    return 0;
}