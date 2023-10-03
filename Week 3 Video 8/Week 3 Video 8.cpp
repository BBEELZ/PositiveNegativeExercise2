#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter an integer: ";
    int number;
    cin >> number;

    bool isPositive = (number > 0);
    bool isNegative = (number < 0);
    bool isZero = !isNegative && !isPositive;
    bool isNonZero = !isZero;

    bool isEven = (number % 2) == 0;
    bool isOdd = !isEven;

    if (isPositive && isEven)
    {
        cout << number << " is positive and even!" << endl;
    }

    else if (isPositive && isOdd)
    {
        cout << number << " is positive and odd!" << endl;
    }

    else if (isNegative && isOdd)
    {
        cout << number << " is negative and odd!" << endl;
    }

    else if (isNegative && isEven)
    {
        cout << number << " is negative and even!" << endl;
    }
}
