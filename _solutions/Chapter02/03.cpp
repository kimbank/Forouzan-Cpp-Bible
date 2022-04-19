#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            char out = (i == 2 || j == 0 || j == 6) ? 'H' : ' ';
            cout << out;
        }
        cout << "\n";
    }

    return 0;
}