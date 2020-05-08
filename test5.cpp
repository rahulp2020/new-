// C++ program to demonstrate the use of std::min
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Defining the binary function
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{

    // Finding the smallest of all the numbers
    cout << min( 1, min(2,0,comp), comp) << "\n";

    return 0;
}
