#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (marks >= 75)
        cout << "Grade A";
    else if (marks >= 60)
        cout << "Grade B";
    else if (marks >= 45)
        cout << "Grade C";
    else if (marks < 30)
        cout << "Grade D";
    else
        cout << "No grade specified";

    return 0;
}