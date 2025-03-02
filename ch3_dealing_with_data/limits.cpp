// limits.cpp -- Some integer limits.
#include <iostream>
#include <climits>                      // Use limits.h for older systems

int
main()
{
    using namespace std;

    int         n_int   = INT_MAX;      // initialize n_int to max value
    short       n_short = SHRT_MAX;     // symbols defined in climits file
    long        n_long  = LONG_MAX;
    long long   n_llong = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl;
    cout << "long long is " << sizeof(long long) << " bytes." << endl;
    cout << endl;

    cout << "Maximum Values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int Value: " << INT_MIN << endl;
    cout << "Bits per Byte: " << CHAR_BIT << endl;

    cin.get();
    return 0;
}