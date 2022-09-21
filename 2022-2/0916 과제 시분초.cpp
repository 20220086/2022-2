#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0;

    cout << "초 입력 : ";
    cin >> a;

    b = a / 3600;
    a %= 3600;
    c = a / 60;
    a %= 60;

    printf("%d시간 %d분 %d초", b, c, a);

    return 0;
}
