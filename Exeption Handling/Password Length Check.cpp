#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        string password;
        cout << "Enter password: ";
        cin >> password;

        if (password.length() < 8)
        {
            throw password;
        }

        cout << "Password accepted." << endl;
    }
    catch (string p)
    {
        cout << "Password is too short!" << endl;
    }

    return 0;
}
