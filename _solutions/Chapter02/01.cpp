#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}