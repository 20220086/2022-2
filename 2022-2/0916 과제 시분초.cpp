#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0;

    cout << "�� �Է� : ";
    cin >> a;

    b = a / 3600;
    a %= 3600;
    c = a / 60;
    a %= 60;

    printf("%d�ð� %d�� %d��", b, c, a);

    return 0;
}
