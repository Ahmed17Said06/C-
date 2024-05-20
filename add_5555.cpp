#include<iostream>
using namespace std;

int main()
{
    string number;
    cout << "Enter number with more that 6 digits.\n";
    getline(cin,number);
    int digit = 0;
    int carry = 0;

    for (int i = 0; i < number.length(); ++i)
    {
        digit = number[number.length() - 1 - i] -'0';
        if (i < 4)
        {
            digit += 5;
            digit += carry;
        }
        if (digit >= 10)
        {
            digit -= 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        number[number.length() - 1 - i] = digit + '0';
    }
    if (carry)
    {
        cout << '1';
    }
    cout << number;
    return 0;
}