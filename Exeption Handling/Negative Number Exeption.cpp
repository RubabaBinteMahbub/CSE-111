#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        if (age < 0)
        {
            throw age;
        }

        cout << "Age = " << age << endl;
    }
    catch (int x)
    {
        cout << "Invalid age! Age cannot be negative." << endl;
    }

    return 0;
}

//Input : -5
//Output : Invalid age! Age cannot be negative.
