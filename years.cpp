#include <iostream>
using namespace std;

int main()
{

    int inputDays = -1;

    cin >> inputDays;
    int years = inputDays / 360;
    int months = (inputDays % 360) / 30;
    int days = (inputDays % 360) % 30;

    cout << years << " " << months << " " << days;

    return 0;
}