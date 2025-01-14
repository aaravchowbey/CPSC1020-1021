// This program demonstrates the use of the indirection
// operator.
#include <iostream>
using namespace std;

int main()
{
    int x = 25;     // int variable
    int *ptr;       // Pointer variable, can point to an int

    ptr = &x;       // Store the address of x in ptr

    // Use both x and ptr to display the value in x
    cout << "Here is the value in x, printed twice:\n";
    cout << x << "  " << *ptr << endl;

    // Assign 100 to the location pointed to by ptr
    // This will actually assign 100 to x.
    *ptr = 100;

    // Use both x and ptr to display the value in x
    cout << "Once again, here is the value in x:\n";
    cout << x << "  " << *ptr << endl;
    return 0;
}
