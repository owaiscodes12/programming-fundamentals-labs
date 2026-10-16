#include <iostream>
using namespace std;

int main()
{
    int qty = 5, salesReps = 2;
    double unitsEach;

    unitsEach = static_cast<double>(qty) / salesReps;

    cout << "Units Each: " << unitsEach << endl;

    return 0;
}