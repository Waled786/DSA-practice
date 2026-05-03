// Calculate the factorial of a positive integer entered by user.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}