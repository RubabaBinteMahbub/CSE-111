#include <iostream>
using namespace std;

int main()
{
    try
    {
        int num1, num2;

        cout << "Enter the 1st number: ";
        cin >> num1;

        cout << "Enter the 2nd number: ";
        cin >> num2;

        if (num2 == 0)
        {
            throw -1;
        }

        double result = (double)num1 / num2;
        cout << "Result = " << result << endl;
    }
    catch (int x)
    {
        cout << "Division by zero is not possible." << endl;
        cout << "Try again." << endl;
    }

    return 0;
}

// Input : 5 0
// Output : Division by zero is not possible.
//Try again.

// Input : 
//Enter the 1st number: 10
//Enter the 2nd number: 2
// Output : Result = 5
