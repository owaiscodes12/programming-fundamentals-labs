#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;

    switch (m)
    {
        case 2: cout << 28; break;
        case 4: case 6: case 9: case 11:
            cout << 30; break;
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            cout << 31; break;
        default: cout << "Invalid month";
    }

    return 0;
}