#include <iostream>
using namespace std;

int main()
{
    try
    {
        int marks;
        cout << "Enter marks: ";
        cin >> marks;

        if (marks < 0 || marks > 100)
        {
            throw marks;
        }

        cout << "Valid Marks: " << marks << endl;
    }
    catch (int x)
    {
        cout << "Invalid marks! Marks must be between 0 and 100." << endl;
    }

    return 0;
}

// Input : 120
// Output : Invalid marks! Marks must be between 0 and 100.
