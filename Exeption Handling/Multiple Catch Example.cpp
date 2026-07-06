#include <iostream>
using namespace std;

int main()
{
    try
    {
        int choice;
        cout << "Enter a number: ";
        cin >> choice;

        if (choice == 1)
            throw 100;

        else if (choice == 2)
            throw 'A';

        else
            cout << "No Exception." << endl;
    }

    catch (int x)
    {
        cout << "Integer Exception: " << x << endl;
    }

    catch (char c)
    {
        cout << "Character Exception: " << c << endl;
    }

    return 0;
}

// Input : 1
// Output : Integer Exc2eption: 100
// Input : 2
// Output : Character Exception: A
