#include <iostream>
using namespace std;

int main()
{
    int lowest_1 = INT_MAX;
    int lowest_2 = INT_MAX;
    int lowest_3 = INT_MAX;

    int n = -1;
    cout << "Enter n make sure n should be >= 3: \n";
    cin >> n;
    if (n < 3)
    {
        cout << "Invalid input n must be larger than or equal 3.\n";
        return 0;
    }
    int numbers[n];
    cout << "Enter the numbers \n";
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
        int temp = 0;
        if (numbers[i] < lowest_1)
        {
            temp = lowest_1;
            lowest_1 = numbers[i];
            lowest_3 = lowest_2;
            lowest_2 = temp;
        }
        else if (numbers[i] < lowest_2)
        {
            temp = lowest_2;
            lowest_2 = numbers[i];
            lowest_3 = temp;
        }
        else if(numbers[i] < lowest_3)
        {
            lowest_3 = numbers[i];
        }
    }
    cout << lowest_1 << " " << lowest_2 << " "<< lowest_3;
    return 0;
}
