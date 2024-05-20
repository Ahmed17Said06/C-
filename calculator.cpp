#include <iostream>
using namespace std;

double Add (double a, double b)
{
    return a + b;
}

double Subtract (double a, double b)
{
    return a - b;
}

double Multiply (double a, double b)
{
    return a * b;
}

double Divide (double a, double b)
{
    if (b != 0)
    {
        return (a / b);
    }
    else
    {
        cout << "Error Can't divide by zero.\n";
        return -1;
    }
}

void Calculator (double &a, double &b)
{
    bool not_done = true;
    int operations = 0;
    while (not_done)
    {
        cout << "\nEnter \n1 to Add \n2 to Subtract \n3 to Multiply \n4 to divide \n5 to End the program.\n";
        int choice;
        cin >> choice;
        
        if (choice == 1)
        {
            cout << Add(a, b);
            operations++;      
        }
        else if (choice == 2)
        {
            cout << Subtract(a, b);
            operations++;
        }
        else if (choice == 3)
        {
            cout << Multiply (a, b);
            operations++;
        }
        else if (choice == 4)
        {
            if (Divide(a, b) != -1)
            {
                cout << Divide(a, b);
                operations++;
            }
            else
            {
                cout << Divide(a, b);
            }
        }
        else if (choice == 5)
        {
            not_done = false;
            cout << "Good Bye.\n";
        }
        else
        {
            cout << "Wrong choice. \n";
        }
    }

    cout << "You made " << operations << " operations.\n";
}
int main()
{
    cout << "Enter 2 numbers.\n";
    double a, b;
    cin >> a >> b;
    Calculator(a, b);
    return 0;
}