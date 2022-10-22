#include <iostream>
using namespace std;

int main()
{
    int n1 = 15;

    n1 /= 10;
    cout << n1 << endl;

    n1 %= 6;
    cout << n1 << endl;

    int n2 = 1 % 6;
    cout << n2;

    return 0; 
}
