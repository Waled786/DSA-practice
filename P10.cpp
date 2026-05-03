// Input ‘N’ numbers from user and sum up only those numbers, which are odd. Also display the count of odd numbers entered.

#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0, count = 0;
    cout << "Enter the number of integers you want to input: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cout << "Enter integer " << i + 1 << ": ";
        cin >> num;
        if (num % 2 == 0)
        {
            continue; // Skip even numbers
        }
        else
        {
            sum += num; // Add odd number to sum
            count++;    // Increment count of odd numbers
        }
    }
    cout << "Sum of odd numbers: " << sum << endl;
    cout << "Count of odd numbers: " << count << endl;
    return 0;
}