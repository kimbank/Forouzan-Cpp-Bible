#include <iostream>

using namespace std;

int main() {
    int hour, min, sec;
    
    cout << "시간 : ";
    cin >> hour;

    cout << "분\t : ";
    cin >> min;

    cout << "초\t : ";
    cin >> sec;

    int totalSec = 3600*hour + 60*min + sec;

    cout << hour << "시간 " << min << "분 " << sec << "초는 ";
    cout << totalSec << "초입니다.\n";

    return 0;
}