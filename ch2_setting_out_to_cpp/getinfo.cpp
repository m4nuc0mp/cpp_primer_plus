// getinfo.cpp -- input and output
#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int carrots;

    cout << "How many carrots do you have? " << endl;
    cin >> carrots;
    cout << "Here you have two more\n" << endl;
    carrots = carrots + 2;
    cout << "Now you have "
         << carrots
         << " carrots."
         << endl;
    cin.get();

    return 0;
}