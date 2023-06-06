#include <iostream>
using namespace std;

int main()
{
    int i, fact = 1, number;

    cout << "Enter any number" << endl;
    cin >> number;

    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << number << "is: " << fact << endl;
}