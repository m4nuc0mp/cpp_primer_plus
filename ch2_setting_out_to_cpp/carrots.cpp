// carrots.cpp -- food processing program
// uses and displays a variable
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    int carrots = 25;

    cout << "I have ";
    cout << carrots;
    cout << " carrots." << endl;
    
    carrots -= 1;
    cout << "Crunch, crunch...Now I have " << carrots << " carrots." << endl;
    return 0;
}