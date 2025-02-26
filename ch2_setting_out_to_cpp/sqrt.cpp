// sqrt.cpp -- Using sqrt() function.
#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in meters: ";
    cin >> area;

    double side = 0;
    side = sqrt(area);
    cout << "That's the equivalente of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;

    return 0;
}